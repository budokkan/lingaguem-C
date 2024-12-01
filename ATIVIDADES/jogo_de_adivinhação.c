#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, tentativa;

    srand(time(0));
    secreto = rand() % 100 + 1;

    printf("Adivinhe o número (entre 1 e 100): ");

    do {
        scanf("%d", &tentativa);
        if (tentativa < secreto)
            printf("Maior!\n");
        else if (tentativa > secreto)
            printf("Menor!\n");
        else
            printf("Parabéns, você acertou!\n");
    } while (tentativa != secreto);

    return 0;
}
