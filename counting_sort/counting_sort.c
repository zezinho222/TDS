#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void counting_sort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    int *count = (int *)calloc(max + 1, sizeof(int));
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i]--)
            arr[index++] = i;
    }

    free(count);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = atoi(argv[i + 1]);
    }

    counting_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
