/*
FACULDADE SENAC - CURSO DE ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
DISCIPLINA: SISTEMAS DE GERENCIAMENTO C/C++ 
PROFESSOR: VINICIUS FIGUEIREDO
AULA3: EXERCÍCIO - IMPLEMENTAÇÃO DO ALGORITMO DE VALIDAÇÃO DE CPF - COM ERRO
DATA: 12/03/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,e,f,g,h,i,resto1,dv1,dv2,resto2;
    
    printf("Digite o primeiro dígito do CPF: ");
    scanf("%d", &a);

    printf("Digite o segundo dígito do CPF: ");
    scanf("%d", &b);

    printf("Digite o terceiro dígito do CPF: ");
    scanf("%d", &c);

    printf("Digite o quarto dígito do CPF: ");
    scanf("%d", &d);    

    printf("Digite o quinto dígito do CPF: ");
    scanf("%d", &e);

    printf("Digite o sexto dígito do CPF: ");
    scanf("%d", &f);

    printf("Digite o sétimo dígito do CPF: ");
    scanf("%d", &g);

    printf("Digite o oitavo dígito do CPF: ");
    scanf("%d", &h);    

    printf("Digite o nono dígito do CPF: ");
    scanf("%d", &i);    

    resto1 = (a*10 + b*9 + c*8 + d*7 + e*6 + f*5 + g*4 + h*3 + i*2) % 11;

    if (resto1 < 2) {
        dv1 = 0;
    } else {
        dv1 = 11 - resto1;
    }   

    printf("O resto1 é: %d\n", resto1);
    printf("O primeiro dígito verificador é: %d\n", dv1);

    resto2 = (a*11 + b*10 + c*9 + d*8 + e*7 + f*6 + g*5 + h*4 + i*3 + dv1*2) % 11;

    if (resto2 < 1) {
        dv2 = 0;
    } else {
        dv2 = 10 - resto2;
    }

    printf("O resto2 é: %d\n", resto2);
    printf("O segundo dígito verificador é: %d\n", dv2);

    return 0;
}