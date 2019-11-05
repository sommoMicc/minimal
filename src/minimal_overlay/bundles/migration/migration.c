#define _GNU_SOURCE
#define _POSIX_C_SOURCE 199309L

#include <assert.h>
#include <sched.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <stdint.h>

//Effettua la computazione
void do_computation(int* array, int array_length) {
    for(int j = 0; j < array_length; j++) {
        const int x = rand() % array_length;
        const int y = rand() % array_length;
        array[j] = (array[x] * array[y]) % array_length;
    }
}

//Inizializza l'array oggetto della computazione
void init_array(int* array, int array_length) {
    for(int i=0; i<array_length; i++) {
        array[i] = 1;
    }
}

//Ritorna l'indice della CPU in cui il processo è in 
//esecuzione
int get_CPU_number() {
    return sysconf(_SC_NPROCESSORS_ONLN);
}


int get_next_cpu() {
    const int totCPU = get_CPU_number();
    int next_cpu;
    do {
        next_cpu = rand() % totCPU;
    } while (next_cpu == sched_getcpu());
    return next_cpu;
}

int main(int argc, char *argv[]) {
    printf("Inizio benchmark\nCPU: %d\n\n", get_CPU_number());
    srand(time(0));

    //Valori predefiniti per numero di iterazioni e valore iniziale di complessità
    if(argc < 2) {
        argv[1] = "10000"; //Numero di iterazioni
        argv[2] = "10"; //Valore iniziale di complessità
    }

    long i =0;
    const long iterations = atoi(argv[1]);
    const long initial_computation_complexity = atoi(argv[2]);

    for(int complexity_factor = 1; complexity_factor <= 6; complexity_factor++) {
        const int computation_complexity = pow(initial_computation_complexity,complexity_factor); 

        printf("------\nIterazioni: %ld, complessita: %d", iterations, computation_complexity);

        //Contatori del numero di iterazioni per tipo (migration o non migration/normali/sequenziali)
        int migration_iterations = 0;
        int normal_iterations = 0;

        uint64_t total_sequential_delays = 0;
        uint64_t total_migration_delays = 0;
        uint64_t delta_us;

        int array[computation_complexity];
        init_array(array, computation_complexity); 

        for(int i=0; i < iterations; i++) {
            struct timespec start, end;

            //Migro i processi solo nelle iterazioni pari
            bool do_migration = (i % 2 == 0);

            //Determino la CPU target
            const int nextCPU = get_next_cpu();
            cpu_set_t target;
            CPU_ZERO(&target);
            CPU_SET(nextCPU, &target);

            //Avvio il cronometro
            clock_gettime(CLOCK_MONOTONIC_RAW, &start);
            //Se è il caso, effettuo la migrazione
            if(do_migration) {
                sched_setaffinity(0, sizeof(target), &target);
                if(sched_getcpu() != nextCPU) {
                    sleep(0);
                }
                if(sched_getcpu() != nextCPU) {
                    printf("\nMigrazione non avvenuta!");
                }

            }
            //Effettuo il calcolo 
            do_computation(array,computation_complexity);

            //Fermo il cronometro
            clock_gettime(CLOCK_MONOTONIC_RAW, &end);
            
            //Calcolo il tempo della computazione
            delta_us = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_nsec - start.tv_nsec) / 1000;
            if(do_migration) { 
                total_migration_delays += delta_us;
                migration_iterations++;
            }
            else {
                total_sequential_delays += delta_us;
                normal_iterations++;
            }
        }

        //Calcolo i risultati
        double avg_migration = total_migration_delays / migration_iterations;
        double avg_sequential = total_sequential_delays / normal_iterations;

        //Visualizzo i risultati
        printf("\navg_migration=%.2fnms, avg_sequential=%.2fms",avg_migration,avg_sequential);
        printf("\ntotal_migration=%d, total_sequential=%d", migration_iterations, normal_iterations);
        printf("\n- Delta: %.2fms, %.2f%%\n", avg_migration - avg_sequential, (avg_migration - avg_sequential)*100/avg_sequential);
    }
    return EXIT_SUCCESS;
}
