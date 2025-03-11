#include <stdio.h>
#include <stdlib.h>

// Função para trocar dois elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort - O(n^2)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    // Converter os argumentos para um array de inteiros
    int n = argc - 1;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = atoi(argv[i + 1]);  // Converte string para inteiro
    }

    printf("Array original: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array ordenado: ");
    printArray(arr, n);

    return 0;
}
