#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int opcao;
    printf("Digite três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Escolha o tipo de média:\n");
    printf("1 - Média aritmética\n");
    printf("2 - Média ponderada (pesos 3, 3 e 4)\n");
    scanf("%d", &opcao);

    float media;
    if(opcao == 1) {
        media = (nota1 + nota2 + nota3) / 3;
        printf("A média aritmética é: %.2f\n", media);
    } else if(opcao == 2) {
        media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
        printf("A média ponderada é: %.2f\n", media);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
