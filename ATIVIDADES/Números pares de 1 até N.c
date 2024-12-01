#include <stdio.h>

int main() {
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);

    printf("Números pares de 1 até %d:\n", N);
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
