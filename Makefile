NTIMES=10
ARRAY_VALUES="fgskjdlswilakulhrijkjsvndbdmsadjdakshsekgfjsl"

export NTIMES

compile:
        /usr/bin/gcc bubble_sort.c -o bubble_sort_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./bubble_sort_run $(ARRAY_VALUES)" C bubble_sort $(NTIMES)

run:
        ./bubble_sort_run $(ARRAY_VALUES)

mem:
        { /usr/bin/time -v ./bubble_sort_run $(ARRAY_VALUES) > /dev/null; } 2>&1 | grep "Maximum resident"

clean:
        rm -f bubble_sort_run
