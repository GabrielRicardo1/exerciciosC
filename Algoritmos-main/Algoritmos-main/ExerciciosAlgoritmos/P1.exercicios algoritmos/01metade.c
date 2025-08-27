//1. Faça um algoritmo que solicita ao usuário um número real e exibe na tela a metade do número digitado.
#include <stdio.h>

int main() {
    float x;
    printf("informe seu numero real: ");
    scanf("%f",&x);
    printf("a metade de %.2f é %.2f\n",x,x/2);
    return 0;
}
