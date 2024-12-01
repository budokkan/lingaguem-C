#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo;

    // Solicita ao usuário o número de termos.
    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    // Verifica se o número de termos é válido.
    if (n <= 0) {
        printf("Por favor, digite um numero positivo maior que zero.\n");
    } else {
        printf("Sequencia de Fibonacci com %d termos:\n", n);

        // Calcula e exibe a sequência de Fibonacci.
        for (int i = 1; i <= n; i++) {
            printf("%d ", primeiro); // Exibe o termo atual.
            proximo = primeiro + segundo; // Calcula o próximo termo.
            primeiro = segundo; // Atualiza o primeiro termo.
            segundo = proximo; // Atualiza o segundo termo.
        }

        printf("\n"); // Nova linha após a sequência.
    }

    return 0;
}
