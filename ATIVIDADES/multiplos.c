#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro positivo.
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo.
    if (numero <= 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        printf("Multiplos de %d entre 1 e 100:\n", numero);

        // Laço 'for' para encontrar e exibir múltiplos.
        for (int i = 1; i <= 100; i++) {
            if (i % numero == 0) { // Verifica se 'i' é múltiplo de 'numero'.
                printf("%d ", i);
            }
        }

        printf("\n"); // Nova linha após a sequência.
    }

    return 0;
}
