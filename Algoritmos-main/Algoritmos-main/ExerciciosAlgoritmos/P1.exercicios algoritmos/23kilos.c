/*23. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre
esse peso em gramas.*/

#include <stdio.h>

int main() {
    float peso, peso_g;
    printf("informe seu peso em kg: ");
    scanf("%f",&peso);
    peso_g = peso*1000;
    printf("o peso de %.2f kg em gramas é %.2f g\n",peso,peso_g);
    return 0;
}
