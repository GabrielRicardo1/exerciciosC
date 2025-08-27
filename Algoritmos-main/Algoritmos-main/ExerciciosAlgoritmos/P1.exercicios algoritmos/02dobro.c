//2. Faça um algoritmo que solicite ao usuário um valor e exiba o dobro do valor.
#include <stdio.h>

int main() {
    float x;
    printf("informe um valor: ");
    scanf("%f",&x);
    printf("o dobro de %.2f é %.2f\n",x,x*2);
    return 0;
}
