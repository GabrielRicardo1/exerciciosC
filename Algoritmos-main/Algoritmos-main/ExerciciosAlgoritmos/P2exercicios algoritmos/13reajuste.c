/*Exercicio 13
Fazer um algoritmo que calcule e imprima o salario reajustado de um funcionario de acordo com as seguintes regras:
 Salario de ate R$300,00 reajuste de 50%;
 Salario maiores que R$300,00 reajuste de 30%;*/

#include <stdio.h>

int main() {
    float sal, novo;
    printf("informe o salario do funcionario: ");
    scanf("%f",&sal);
    if(sal<=300) novo = sal*1.5;
    else novo = sal*1.3;
    printf("salario reajustado: %.2f R$\n",novo);
    return 0;
}

