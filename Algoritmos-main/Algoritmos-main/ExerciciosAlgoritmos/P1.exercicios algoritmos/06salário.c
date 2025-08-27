//6. Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
//porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
//aumento.

#include <stdio.h>

int main() {
    float s,a,novo;
    printf("informe seu salario: ");
    scanf("%f",&s);
    printf("informe a porcentagem de aumento: ");
    scanf("%f",&a);
    novo=s+(s*a/100);
    printf("o aumento de %.2f%% sobre %.2f R$ é %.2f R$\n",a,s,s*a/100);
    printf("o salario apos o aumento sera %.2f R$\n",novo);
    return 0;
}
