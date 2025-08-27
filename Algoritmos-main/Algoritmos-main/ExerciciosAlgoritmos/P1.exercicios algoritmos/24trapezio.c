/*24. Faça um algoritmo que calcule e mostre a área de um trapézio.*/

#include <stdio.h>

int main() {
    float bmaior, bmenor, h, area;
    printf("informe a base maior do trapezio: ");
    scanf("%f",&bmaior);
    printf("informe a base menor do trapezio: ");
    scanf("%f",&bmenor);
    printf("informe a altura do trapezio: ");
    scanf("%f",&h);
    area = (bmaior + bmenor) * h / 2;
    printf("a area do trapezio com base maior %.2f, base menor %.2f e altura %.2f é %.2f\n",bmaior,bmenor,h,area);
    return 0;
}
