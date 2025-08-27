//4. Faça um algoritmo que recebe dois valores representando as medidas da base e da
//altura de um triângulo qualquer e exiba a área deste triângulo.

#include <stdio.h>

int main() {
    float b,h;
    printf("informe a base de seu triangulo: ");
    scanf("%f",&b);
    printf("informe a altura de seu triangulo: ");
    scanf("%f",&h);
    printf("a area do triangulo com base %.2f e altura %.2f é %.2f\n",b,h,(b*h)/2);
    return 0;
}
