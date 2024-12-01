#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número diferente de zero: ");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("O número é positivo.\n");
    } else if(numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero, por favor digite um número diferente de zero.\n");
    }

    return 0;
}
