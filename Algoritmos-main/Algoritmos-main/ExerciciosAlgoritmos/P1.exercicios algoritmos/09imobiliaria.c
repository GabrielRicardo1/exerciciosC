//9. A imobiliária AJB vende apenas terrenos retangulares. Faça um algoritmo para ler as
//dimensões de um terreno e depois exibir a área do terreno.

#include <stdio.h>

int main() {
    float l,c;
    printf("informe a largura do terreno: ");
    scanf("%f",&l);
    printf("informe o comprimento do terreno: ");
    scanf("%f",&c);
    printf("a area do terreno de largura %.2f e comprimento %.2f é %.2f\n",l,c,l*c);
    return 0;
}
