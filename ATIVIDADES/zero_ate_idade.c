#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Números de 0 até %d:\n", idade);
    for(int i = 0; i <= idade; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
