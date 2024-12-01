#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1; // Usamos unsigned long long para suportar valores grandes.

    // Solicita ao usuário um número inteiro positivo.
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo.
    if (n < 0) {
        printf("O fatorial nao esta definido para numeros negativos.\n");
    } else {
        // Calcula o fatorial usando o laço "for".
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        // Exibe o resultado.
        printf("O fatorial de %d e: %llu\n", n, fatorial);
    }

    return 0;
}
