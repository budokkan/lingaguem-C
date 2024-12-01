#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Quadrado: %d\n", num * num);
    printf("Cubo: %d\n", num * num * num);
    return 0;
}
