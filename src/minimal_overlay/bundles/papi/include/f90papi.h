!
!  This file contains defines required by the PAPI Fortran interface.
!  It is automagically generated by genpapifdef.c
!  DO NOT modify its contents and expect the changes to stick.
!  Changes MUST be made in genpapifdef.c instead.
!


!
!  General purpose defines.
!

      INTEGER, PARAMETER :: PAPI_NULL          = -1
      INTEGER, PARAMETER :: PAPI_VER_CURRENT   = 84344832
      INTEGER, PARAMETER :: PAPI_VERSION       = 84345088
      INTEGER, PARAMETER :: PAPI_MAX_PRESET_EVENTS = 128
      INTEGER, PARAMETER :: PAPI_NOT_INITED    = 0
      INTEGER, PARAMETER :: PAPI_LOW_LEVEL_INITED = 1
      INTEGER, PARAMETER :: PAPI_HIGH_LEVEL_INITED = 2
      INTEGER, PARAMETER :: PAPI_THREAD_LEVEL_INITED = 4
      INTEGER, PARAMETER :: PAPI_DOM_USER      = 1
      INTEGER, PARAMETER :: PAPI_DOM_KERNEL    = 2
      INTEGER, PARAMETER :: PAPI_DOM_OTHER     = 4
      INTEGER, PARAMETER :: PAPI_DOM_SUPERVISOR = 8
      INTEGER, PARAMETER :: PAPI_DOM_ALL       = 15
      INTEGER, PARAMETER :: PAPI_DOM_MIN       = 1
      INTEGER, PARAMETER :: PAPI_DOM_MAX       = 15
      INTEGER, PARAMETER :: PAPI_DOM_HWSPEC    = ((-2147483647) - 1)
      INTEGER, PARAMETER :: PAPI_STOPPED       = 1
      INTEGER, PARAMETER :: PAPI_RUNNING       = 2
      INTEGER, PARAMETER :: PAPI_PAUSED        = 4
      INTEGER, PARAMETER :: PAPI_NOT_INIT      = 8
      INTEGER, PARAMETER :: PAPI_OVERFLOWING   = 16
      INTEGER, PARAMETER :: PAPI_PROFILING     = 32
      INTEGER, PARAMETER :: PAPI_MULTIPLEXING  = 64
      INTEGER, PARAMETER :: PAPI_ATTACHED      = 128
      INTEGER, PARAMETER :: PAPI_CPU_ATTACHED  = 256
      INTEGER, PARAMETER :: PAPI_QUIET         = 0
      INTEGER, PARAMETER :: PAPI_VERB_ECONT    = 1
      INTEGER, PARAMETER :: PAPI_VERB_ESTOP    = 2
      INTEGER, PARAMETER :: PAPI_MIN_STR_LEN   = 64
      INTEGER, PARAMETER :: PAPI_HUGE_STR_LEN  = 1024
      INTEGER, PARAMETER :: PAPI_MAX_STR_LEN   = 128
      INTEGER, PARAMETER :: PAPI_NUM_ERRORS    = 26
      INTEGER, PARAMETER :: PAPI_MULTIPLEX_DEFAULT = 0
      INTEGER, PARAMETER :: PAPI_MULTIPLEX_FORCE_SW = 1
      INTEGER, PARAMETER :: PAPI_DEBUG         = 2
      INTEGER, PARAMETER :: PAPI_MULTIPLEX     = 3
      INTEGER, PARAMETER :: PAPI_DEFDOM        = 4
      INTEGER, PARAMETER :: PAPI_DOMAIN        = 5
      INTEGER, PARAMETER :: PAPI_DEFGRN        = 6
      INTEGER, PARAMETER :: PAPI_GRANUL        = 7
      INTEGER, PARAMETER :: PAPI_DEF_MPX_NS    = 8
      INTEGER, PARAMETER :: PAPI_MAX_MPX_CTRS  = 11
      INTEGER, PARAMETER :: PAPI_PROFIL        = 12
      INTEGER, PARAMETER :: PAPI_PRELOAD       = 13
      INTEGER, PARAMETER :: PAPI_CLOCKRATE     = 14
      INTEGER, PARAMETER :: PAPI_MAX_HWCTRS    = 15
      INTEGER, PARAMETER :: PAPI_HWINFO        = 16
      INTEGER, PARAMETER :: PAPI_EXEINFO       = 17
      INTEGER, PARAMETER :: PAPI_MAX_CPUS      = 18
      INTEGER, PARAMETER :: PAPI_ATTACH        = 19
      INTEGER, PARAMETER :: PAPI_SHLIBINFO     = 20
      INTEGER, PARAMETER :: PAPI_LIB_VERSION   = 21
      INTEGER, PARAMETER :: PAPI_COMPONENTINFO = 22
      INTEGER, PARAMETER :: PAPI_DETACH        = 1
      INTEGER, PARAMETER :: PAPI_GRN_THR       = 1
      INTEGER, PARAMETER :: PAPI_GRN_MIN       = 1
      INTEGER, PARAMETER :: PAPI_GRN_PROC      = 2
      INTEGER, PARAMETER :: PAPI_GRN_PROCG     = 4
      INTEGER, PARAMETER :: PAPI_GRN_SYS       = 8
      INTEGER, PARAMETER :: PAPI_GRN_SYS_CPU   = 16
      INTEGER, PARAMETER :: PAPI_GRN_MAX       = 16
      INTEGER, PARAMETER :: PAPI_DERIVED       = 1
      INTEGER, PARAMETER :: PAPI_PROFIL_POSIX  = 0
      INTEGER, PARAMETER :: PAPI_PROFIL_RANDOM = 1
      INTEGER, PARAMETER :: PAPI_PROFIL_WEIGHTED = 2
      INTEGER, PARAMETER :: PAPI_PROFIL_COMPRESS = 4
      INTEGER, PARAMETER :: PAPI_PROFIL_BUCKET_16 = 8
      INTEGER, PARAMETER :: PAPI_PROFIL_BUCKET_32 = 16
      INTEGER, PARAMETER :: PAPI_PROFIL_BUCKET_64 = 32
      INTEGER, PARAMETER :: PAPI_USR1_LOCK     = 0
      INTEGER, PARAMETER :: PAPI_USR2_LOCK     = 1
      INTEGER, PARAMETER :: PAPI_LOCK_USR1     = 0
      INTEGER, PARAMETER :: PAPI_LOCK_USR2     = 1
      INTEGER, PARAMETER :: PAPI_LOCK_NUM      = 2
      INTEGER, PARAMETER :: PAPI_MH_MAX_LEVELS = 6
      INTEGER, PARAMETER :: PAPI_USR1_TLS      = 0
      INTEGER, PARAMETER :: PAPI_USR2_TLS      = 1
      INTEGER, PARAMETER :: PAPI_TLS_USR1      = 0
      INTEGER, PARAMETER :: PAPI_TLS_USR2      = 1
      INTEGER, PARAMETER :: PAPI_TLS_HIGH_LEVEL = 2
      INTEGER, PARAMETER :: PAPI_TLS_NUM       = 3
      INTEGER, PARAMETER :: PAPIF_DMEM_VMSIZE  = 2
      INTEGER, PARAMETER :: PAPIF_DMEM_RESIDENT = 3
      INTEGER, PARAMETER :: PAPIF_DMEM_HIGH_WATER = 4
      INTEGER, PARAMETER :: PAPIF_DMEM_SHARED  = 5
      INTEGER, PARAMETER :: PAPIF_DMEM_TEXT    = 6
      INTEGER, PARAMETER :: PAPIF_DMEM_LIBRARY = 7
      INTEGER, PARAMETER :: PAPIF_DMEM_HEAP    = 8
      INTEGER, PARAMETER :: PAPIF_DMEM_LOCKED  = 9
      INTEGER, PARAMETER :: PAPIF_DMEM_STACK   = 10
      INTEGER, PARAMETER :: PAPIF_DMEM_PAGESIZE = 11
      INTEGER, PARAMETER :: PAPIF_DMEM_MAXVAL  = 12
      INTEGER, PARAMETER :: PAPI_OK            = 0
      INTEGER, PARAMETER :: PAPI_EINVAL        = -1
      INTEGER, PARAMETER :: PAPI_ENOMEM        = -2
      INTEGER, PARAMETER :: PAPI_ESYS          = -3
      INTEGER, PARAMETER :: PAPI_ECMP          = -4
      INTEGER, PARAMETER :: PAPI_ECLOST        = -5
      INTEGER, PARAMETER :: PAPI_EBUG          = -6
      INTEGER, PARAMETER :: PAPI_ENOEVNT       = -7
      INTEGER, PARAMETER :: PAPI_ECNFLCT       = -8
      INTEGER, PARAMETER :: PAPI_ENOTRUN       = -9
      INTEGER, PARAMETER :: PAPI_EISRUN        = -10
      INTEGER, PARAMETER :: PAPI_ENOEVST       = -11
      INTEGER, PARAMETER :: PAPI_ENOTPRESET    = -12
      INTEGER, PARAMETER :: PAPI_ENOCNTR       = -13
      INTEGER, PARAMETER :: PAPI_EMISC         = -14
      INTEGER, PARAMETER :: PAPI_EPERM         = -15
      INTEGER, PARAMETER :: PAPI_ENOINIT       = -16
      INTEGER, PARAMETER :: PAPI_ENOCMP        = -17
      INTEGER, PARAMETER :: PAPI_ENOSUPP       = -18
      INTEGER, PARAMETER :: PAPI_ENOIMPL       = -19
      INTEGER, PARAMETER :: PAPI_EBUF          = -20
      INTEGER, PARAMETER :: PAPI_EINVAL_DOM    = -21
      INTEGER, PARAMETER :: PAPI_EATTR         = -22
      INTEGER, PARAMETER :: PAPI_ECOUNT        = -23
      INTEGER, PARAMETER :: PAPI_ECOMBO        = -24
      INTEGER, PARAMETER :: PAPI_ECMP_DISABLED = -25

!
!  PAPI preset event values.
!

      INTEGER, PARAMETER :: PAPI_L1_DCM        = ((-2147483647) - 1)
      INTEGER, PARAMETER :: PAPI_L1_ICM        = -2147483647
      INTEGER, PARAMETER :: PAPI_L2_DCM        = -2147483646
      INTEGER, PARAMETER :: PAPI_L2_ICM        = -2147483645
      INTEGER, PARAMETER :: PAPI_L3_DCM        = -2147483644
      INTEGER, PARAMETER :: PAPI_L3_ICM        = -2147483643
      INTEGER, PARAMETER :: PAPI_L1_TCM        = -2147483642
      INTEGER, PARAMETER :: PAPI_L2_TCM        = -2147483641
      INTEGER, PARAMETER :: PAPI_L3_TCM        = -2147483640
      INTEGER, PARAMETER :: PAPI_CA_SNP        = -2147483639
      INTEGER, PARAMETER :: PAPI_CA_SHR        = -2147483638
      INTEGER, PARAMETER :: PAPI_CA_CLN        = -2147483637
      INTEGER, PARAMETER :: PAPI_CA_INV        = -2147483636
      INTEGER, PARAMETER :: PAPI_CA_ITV        = -2147483635
      INTEGER, PARAMETER :: PAPI_L3_LDM        = -2147483634
      INTEGER, PARAMETER :: PAPI_L3_STM        = -2147483633
      INTEGER, PARAMETER :: PAPI_BRU_IDL       = -2147483632
      INTEGER, PARAMETER :: PAPI_FXU_IDL       = -2147483631
      INTEGER, PARAMETER :: PAPI_FPU_IDL       = -2147483630
      INTEGER, PARAMETER :: PAPI_LSU_IDL       = -2147483629
      INTEGER, PARAMETER :: PAPI_TLB_DM        = -2147483628
      INTEGER, PARAMETER :: PAPI_TLB_IM        = -2147483627
      INTEGER, PARAMETER :: PAPI_TLB_TL        = -2147483626
      INTEGER, PARAMETER :: PAPI_L1_LDM        = -2147483625
      INTEGER, PARAMETER :: PAPI_L1_STM        = -2147483624
      INTEGER, PARAMETER :: PAPI_L2_LDM        = -2147483623
      INTEGER, PARAMETER :: PAPI_L2_STM        = -2147483622
      INTEGER, PARAMETER :: PAPI_BTAC_M        = -2147483621
      INTEGER, PARAMETER :: PAPI_PRF_DM        = -2147483620
      INTEGER, PARAMETER :: PAPI_L3_DCH        = -2147483619
      INTEGER, PARAMETER :: PAPI_TLB_SD        = -2147483618
      INTEGER, PARAMETER :: PAPI_CSR_FAL       = -2147483617
      INTEGER, PARAMETER :: PAPI_CSR_SUC       = -2147483616
      INTEGER, PARAMETER :: PAPI_CSR_TOT       = -2147483615
      INTEGER, PARAMETER :: PAPI_MEM_SCY       = -2147483614
      INTEGER, PARAMETER :: PAPI_MEM_RCY       = -2147483613
      INTEGER, PARAMETER :: PAPI_MEM_WCY       = -2147483612
      INTEGER, PARAMETER :: PAPI_STL_ICY       = -2147483611
      INTEGER, PARAMETER :: PAPI_FUL_ICY       = -2147483610
      INTEGER, PARAMETER :: PAPI_STL_CCY       = -2147483609
      INTEGER, PARAMETER :: PAPI_FUL_CCY       = -2147483608
      INTEGER, PARAMETER :: PAPI_HW_INT        = -2147483607
      INTEGER, PARAMETER :: PAPI_BR_UCN        = -2147483606
      INTEGER, PARAMETER :: PAPI_BR_CN         = -2147483605
      INTEGER, PARAMETER :: PAPI_BR_TKN        = -2147483604
      INTEGER, PARAMETER :: PAPI_BR_NTK        = -2147483603
      INTEGER, PARAMETER :: PAPI_BR_MSP        = -2147483602
      INTEGER, PARAMETER :: PAPI_BR_PRC        = -2147483601
      INTEGER, PARAMETER :: PAPI_FMA_INS       = -2147483600
      INTEGER, PARAMETER :: PAPI_TOT_IIS       = -2147483599
      INTEGER, PARAMETER :: PAPI_TOT_INS       = -2147483598
      INTEGER, PARAMETER :: PAPI_INT_INS       = -2147483597
      INTEGER, PARAMETER :: PAPI_FP_INS        = -2147483596
      INTEGER, PARAMETER :: PAPI_LD_INS        = -2147483595
      INTEGER, PARAMETER :: PAPI_SR_INS        = -2147483594
      INTEGER, PARAMETER :: PAPI_BR_INS        = -2147483593
      INTEGER, PARAMETER :: PAPI_VEC_INS       = -2147483592
      INTEGER, PARAMETER :: PAPI_RES_STL       = -2147483591
      INTEGER, PARAMETER :: PAPI_FP_STAL       = -2147483590
      INTEGER, PARAMETER :: PAPI_TOT_CYC       = -2147483589
      INTEGER, PARAMETER :: PAPI_LST_INS       = -2147483588
      INTEGER, PARAMETER :: PAPI_SYC_INS       = -2147483587
      INTEGER, PARAMETER :: PAPI_L1_DCH        = -2147483586
      INTEGER, PARAMETER :: PAPI_L2_DCH        = -2147483585
      INTEGER, PARAMETER :: PAPI_L1_DCA        = -2147483584
      INTEGER, PARAMETER :: PAPI_L2_DCA        = -2147483583
      INTEGER, PARAMETER :: PAPI_L3_DCA        = -2147483582
      INTEGER, PARAMETER :: PAPI_L1_DCR        = -2147483581
      INTEGER, PARAMETER :: PAPI_L2_DCR        = -2147483580
      INTEGER, PARAMETER :: PAPI_L3_DCR        = -2147483579
      INTEGER, PARAMETER :: PAPI_L1_DCW        = -2147483578
      INTEGER, PARAMETER :: PAPI_L2_DCW        = -2147483577
      INTEGER, PARAMETER :: PAPI_L3_DCW        = -2147483576
      INTEGER, PARAMETER :: PAPI_L1_ICH        = -2147483575
      INTEGER, PARAMETER :: PAPI_L2_ICH        = -2147483574
      INTEGER, PARAMETER :: PAPI_L3_ICH        = -2147483573
      INTEGER, PARAMETER :: PAPI_L1_ICA        = -2147483572
      INTEGER, PARAMETER :: PAPI_L2_ICA        = -2147483571
      INTEGER, PARAMETER :: PAPI_L3_ICA        = -2147483570
      INTEGER, PARAMETER :: PAPI_L1_ICR        = -2147483569
      INTEGER, PARAMETER :: PAPI_L2_ICR        = -2147483568
      INTEGER, PARAMETER :: PAPI_L3_ICR        = -2147483567
      INTEGER, PARAMETER :: PAPI_L1_ICW        = -2147483566
      INTEGER, PARAMETER :: PAPI_L2_ICW        = -2147483565
      INTEGER, PARAMETER :: PAPI_L3_ICW        = -2147483564
      INTEGER, PARAMETER :: PAPI_L1_TCH        = -2147483563
      INTEGER, PARAMETER :: PAPI_L2_TCH        = -2147483562
      INTEGER, PARAMETER :: PAPI_L3_TCH        = -2147483561
      INTEGER, PARAMETER :: PAPI_L1_TCA        = -2147483560
      INTEGER, PARAMETER :: PAPI_L2_TCA        = -2147483559
      INTEGER, PARAMETER :: PAPI_L3_TCA        = -2147483558
      INTEGER, PARAMETER :: PAPI_L1_TCR        = -2147483557
      INTEGER, PARAMETER :: PAPI_L2_TCR        = -2147483556
      INTEGER, PARAMETER :: PAPI_L3_TCR        = -2147483555
      INTEGER, PARAMETER :: PAPI_L1_TCW        = -2147483554
      INTEGER, PARAMETER :: PAPI_L2_TCW        = -2147483553
      INTEGER, PARAMETER :: PAPI_L3_TCW        = -2147483552
      INTEGER, PARAMETER :: PAPI_FML_INS       = -2147483551
      INTEGER, PARAMETER :: PAPI_FAD_INS       = -2147483550
      INTEGER, PARAMETER :: PAPI_FDV_INS       = -2147483549
      INTEGER, PARAMETER :: PAPI_FSQ_INS       = -2147483548
      INTEGER, PARAMETER :: PAPI_FNV_INS       = -2147483547
      INTEGER, PARAMETER :: PAPI_FP_OPS        = -2147483546
      INTEGER, PARAMETER :: PAPI_SP_OPS        = -2147483545
      INTEGER, PARAMETER :: PAPI_DP_OPS        = -2147483544
      INTEGER, PARAMETER :: PAPI_VEC_SP        = -2147483543
      INTEGER, PARAMETER :: PAPI_VEC_DP        = -2147483542
      INTEGER, PARAMETER :: PAPI_REF_CYC       = -2147483541
