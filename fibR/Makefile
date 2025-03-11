NTIMES=10
FIB_N=40

export NTIMES

compile:
        /usr/bin/gcc -O2 fibR.c -o fibR_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./fibR_run $(FIB_N)" C fibR $(NTIMES)

run:
        ./fibR_run $(FIB_N)

mem:
        { /usr/bin/time -v ./fibR_run $(FIB_N) > /dev/null; } 2>&1 | grep "Maximum resident"

clean:
        rm -f fibR_run
