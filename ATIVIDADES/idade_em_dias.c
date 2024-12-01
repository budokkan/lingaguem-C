#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;
    printf("Digite a idade em anos, meses e dias (separados por espaço): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    totalDias = (anos * 365) + (meses * 30) + dias;
    printf("A idade em dias é: %d\n", totalDias);
    return 0;
}
