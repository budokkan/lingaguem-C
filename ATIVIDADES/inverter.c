#include <stdio.h>

int main() {
    int numero, invertido = 0;

    // Solicita ao usuário um número inteiro.
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Inverte os dígitos do número usando um laço for.
    for (; numero != 0; numero /= 10) {
        int digito = numero % 10;         // Obtém o último dígito.
        invertido = invertido * 10 + digito;  // Constrói o número invertido.
    }

    // Exibe o número invertido.
    printf("Numero invertido: %d\n", invertido);

    return 0;
}
