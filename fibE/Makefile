NTIMES=10
FIB_N=47

export NTIMES

compile:
        /usr/bin/gcc fibE.c -o fibE_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./fibE_run $(FIB_N)" C fibE $(NTIMES)

run:
        ./fibE_run $(FIB_N)

mem:
        { /usr/bin/time -v ./fibE_run $(FIB_N) > /dev/null; } 2>&1 | grep "Maximum resident"

clean:
        rm -f fibE_run
