#include <stdio.h>
#include <string.h>

int main() {
    char entrada[20];
    int cpf[11];
    int i, soma, resto;

    printf("Digite os 9 primeiros dígitos do CPF:\n");
    scanf("%s", entrada);

    // Converter string para array de inteiros
    for (i = 0; i < 9; i++) {
        cpf[i] = entrada[i] - '0';
    }

    // Primeiro dígito
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }
    resto = soma % 11;
    cpf[9] = (resto < 2) ? 0 : 11 - resto;

    // Segundo dígito
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += cpf[i] * (11 - i);
    }
    resto = soma % 11;
    cpf[10] = (resto < 2) ? 0 : 11 - resto;

    // Exibir resultado
    printf("CPF completo: ");
    for (i = 0; i < 11; i++) {
        printf("%d", cpf[i]);
    }
    printf("\n");

    return 0;
}