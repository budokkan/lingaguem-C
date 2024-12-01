#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Solicita ao usuário um número inteiro positivo.
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo.
    if (numero < 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        // Calcula a soma dos dígitos usando um laço for.
        for (; numero > 0; numero = numero / 10) {
            soma = soma + (numero % 10); // Adiciona o último dígito à soma.
        }

        // Exibe o resultado.
        printf("A soma dos digitos e: %d\n", soma);
    }

    return 0;
}
