//25. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre
//o valor da hipotenusa.

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,h;
    printf("informe o cateto A: ");
    scanf("%f",&a);
    printf("informe o cateto B: ");
    scanf("%f",&b);
    h = sqrt(a*a + b*b);
    printf("a hipotenusa do triangulo com catetos %.2f e %.2f é %.2f\n",a,b,h);
    return 0;
}
