NTIMES=10
ARRAY_VALUES="fgskjdlswilakulhrijkjsvndbdmsadjdakshsekgfjsl"

export NTIMES

compile:
        /usr/bin/gcc merge_sort.c -o merge_sort_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./merge_sort_run $(ARRAY_VALUES)" C merge_sort $(NTIMES)

run:
        ./merge_sort_run $(ARRAY_VALUES)

mem:
        { /usr/bin/time -v ./merge_sort_run $(ARRAY_VALUES) > /dev/null; } 2>&1 | grep "Maximum resident"

clean:
        rm -f merge_sort_run
