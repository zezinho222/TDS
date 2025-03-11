NTIMES=10
ARRAY_VALUES="98 94 54 87 32 76 21 65 43"

export NTIMES

compile:
        /usr/bin/gcc -O2 counting_sort.c -o counting_sort_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./counting_sort_run $(ARRAY_VALUES)" C counting_sort $(NTIMES)

run:
        ./counting_sort $(ARRAY_VALUES)

mem:
        { /usr/bin/time -v ./counting_sort $(ARRAY_VALUES) > /dev/null; } 2>&1 | grep "Maximum resident"

clean:
        rm -f counting_sort
