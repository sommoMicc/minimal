#!/bin/sh

# Each overlay bundle can provide an 'autorun' script which is executed by MLL
# when the system boots. This file must be placed in '/etc/autorun' and should
# follow the notation 'XX_something.sh' where XX is a number from 00 to 99.
# The number defines when the script will be executed, e.g. '00_something.sh'
# will be executed first and '99_something.sh' will be executed last.

cat << CEOF
Type "migration" to start the benchmark
Type "migration_papi" to start the benchmark using PAPI libraries
CEOF
