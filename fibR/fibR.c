#include <stdio.h>
#include <stdlib.h>

long long fib_recursive(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: ./fib_recursive <n>\n");
        return 1;
    }

    int n = atoi(argv[1]);
    if (n < 0) {
        printf("Erro: O número deve ser não negativo.\n");
        return 1;
    }

    printf("Fibonacci Recursivo(%d) = %lld\n", n, fib_recursive(n));

    return 0;
}
