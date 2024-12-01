#include <stdio.h>

int main() {
    int n;

    // Solicita ao usuário um número inteiro positivo.
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo.
    if (n <= 0) {
        printf("Por favor, digite um numero positivo maior que zero.\n");
    } else {
        printf("Quadrado dos numeros de 1 ate %d:\n", n);

        // Laço 'for' para calcular e exibir os quadrados.
        for (int i = 1; i <= n; i++) {
            printf("%d^2 = %d\n", i, i * i); // Calcula o quadrado de 'i'.
        }
    }

    return 0;
}
