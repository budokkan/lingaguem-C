#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = num1;

    if(num2 > maior) {
        maior = num2;
    }
    if(num3 > maior) {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior);
    return 0;
}
