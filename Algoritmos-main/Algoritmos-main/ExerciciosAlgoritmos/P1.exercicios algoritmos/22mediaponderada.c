/*22. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada
dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

#include <stdio.h>

int main() {
    float n1,n2,media;
    printf("informe a primeira nota: ");
    scanf("%f",&n1);
    printf("informe a segunda nota: ");
    scanf("%f",&n2);
    media = (n1*2 + n2*3)/5;
    printf("a media ponderada das notas %.2f e %.2f é %.2f\n",n1,n2,media);
    return 0;
}
