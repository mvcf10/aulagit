#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g,h,i,resto1,dv1,dv2,resto2;
    
    printf("Digite os 9 primeiros digitos do CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a,&b,&c,&d,&e,&f,&g,&h,&i);

    resto1 = (a*10 + b*9 + c*8 + d*7 + e*6 + f*5 + g*4 + h*3 + i*2) % 11;

    if (resto1 < 2) {
        dv1 = 0;
    } else {
        dv1 = 11 - resto1;
    }   

    resto2 = (a*11 + b*10 + c*9 + d*8 + e*7 + f*6 + g*5 + h*4 + i*3 + dv1*2) % 11;

    if (resto2 < 2) {
        dv2 = 0;
    } else {
        dv2 = 11 - resto2;
    }
    printf("O resto1 é: %d\n", resto1);
    printf("O resto2 é: %d\n", resto2);
    printf("O primeiro dígito verificador é: %d\n", dv1);
    printf("O segundo dígito verificador é: %d\n", dv2);

    return 0;
}