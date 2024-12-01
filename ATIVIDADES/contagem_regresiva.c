#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char entrada[10];
    int num;
    int valido;

    // Validação da entrada
    do {
        printf("Digite um número inteiro diferente de zero: ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0';
        valido = 1;

        // Verifica se todos os caracteres são dígitos (ou '-' no início)
        for (int i = 0; i < strlen(entrada); i++) {
            if (!isdigit(entrada[i])) {
                if (!(i == 0 && entrada[i] == '-')) {
                    valido = 0;
                    break;
                }
            }
        }

        if (valido) {
            num = atoi(entrada);  // Converte a string para inteiro

            if (num == 0) {
                printf("Número inválido! Digite um número diferente de 0.\n");
                valido = 0;
            }
        } else {
            printf("Erro: Entrada inválida! Digite apenas números inteiros.\n");
        }
    } while (!valido);

    // Contagem regressiva baseada no número fornecido
    printf("Contagem regressiva:\n");
    if (num > 0) {
        for (int i = num; i >= 1; i--) {
            printf("%d ", i);
        }
    } else {
        for (int i = num; i <= -1; i++) {
            printf("%d ", i);
        }
    }

    printf("\n");  // Nova linha ao final

    return 0;
}
