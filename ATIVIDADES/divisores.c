#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro.
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é zero (caso especial).
    if (numero == 0) {
        printf("Zero nao tem divisores definidos.\n");
    } else {
        printf("Divisores de %d:\n", numero);

        // Laço 'for' para encontrar e exibir os divisores.
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {  // Verifica se 'i' é divisor.
                printf("%d ", i);   // Exibe o divisor.
            }
        }

        printf("\n");  // Nova linha após exibir os divisores.
    }

    return 0;
}
