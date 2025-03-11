#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    long value;
} Memo;

long fib_efficient(int n, Memo *memo, int *size) {
    for (int i = 0; i < *size; i++) {
        if (memo[i].key == n) {
            return memo[i].value;
        }
    }

    long result;
    if (n == 0) {
        result = 0;
    } else if (n == 1) {
        result = 1;
    } else {
        result = fib_efficient(n - 1, memo, size) + fib_efficient(n - 2, memo, size);
    }

    if (*size < 1000) {  // Previne escrita fora dos limites do array
        memo[*size].key = n;
        memo[*size].value = result;
        (*size)++;
    }

    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n < 0) {
        printf("Erro: O número deve ser não negativo.\n");
        return 1;
    }

    Memo memo[1000];  // Capacidade arbitrária para armazenar valores memoizados
    int size = 0;

    printf("Fibonacci Eficiente(%d) = %ld\n", n, fib_efficient(n, memo, &size));
    return 0;
}
