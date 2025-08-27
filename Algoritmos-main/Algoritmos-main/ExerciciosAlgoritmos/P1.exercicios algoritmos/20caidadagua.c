//20. Calcule o volume de uma caixa d'água cilíndrica.

#include <stdio.h>

int main() {
    float r,h,vol;
    printf("informe o raio da caixa: ");
    scanf("%f",&r);
    printf("informe a altura da caixa: ");
    scanf("%f",&h);
    vol = 3.14*r*r*h;
    printf("o volume da caixa d'agua é %.2f\n",vol);
    return 0;
}
