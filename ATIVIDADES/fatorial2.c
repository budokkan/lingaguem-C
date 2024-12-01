#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("Fatorial de %d é %llu\n", num, fatorial);
    return 0;
}
