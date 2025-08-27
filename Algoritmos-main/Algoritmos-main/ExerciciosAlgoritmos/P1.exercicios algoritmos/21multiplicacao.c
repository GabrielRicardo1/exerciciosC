/*21. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses
números.*/

#include <stdio.h>

int main() {
    float a,b,c,mult;
    printf("informe o primeiro numero: ");
    scanf("%f",&a);
    printf("informe o segundo numero: ");
    scanf("%f",&b);
    printf("informe o terceiro numero: ");
    scanf("%f",&c);
    mult = a*b*c;
    printf("a multiplicacao de %.2f, %.2f e %.2f é %.2f\n",a,b,c,mult);
    return 0;
}
