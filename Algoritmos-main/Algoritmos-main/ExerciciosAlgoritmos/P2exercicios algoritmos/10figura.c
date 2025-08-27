/*Exercicio 10
Desenvolver um algoritmo com as opcoes de calcular e imprimir o volume e a area da superficie de um cone reto, um cilindro ou uma esfera.
O algoritmo devera ler a opcoo da figura desejada (cone / cilindro / esfera) e de acordo com a opcao escolhida calcular o volume e a area da superficie da figura pedida. Formulas:*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char figura[20];
    float r,h,area,volume;
    printf("informe a figura (cone/cilindro/esfera): ");
    scanf("%s",figura);
    if(strcmp(figura,"cone")==0){
        printf("informe o raio da base: ");
        scanf("%f",&r);
        printf("informe a altura: ");
        scanf("%f",&h);
        volume = 3.14*r*r*h/3;
        area = 3.14*r*(r + sqrt(h*h + r*r));
    } else if(strcmp(figura,"cilindro")==0){
        printf("informe o raio da base: ");
        scanf("%f",&r);
        printf("informe a altura: ");
        scanf("%f",&h);
        volume = 3.14*r*r*h;
        area = 2*3.14*r*(r+h);
    } else if(strcmp(figura,"esfera")==0){
        printf("informe o raio: ");
        scanf("%f",&r);
        volume = 4*3.14*r*r*r/3;
        area = 4*3.14*r*r;
    } else {
        printf("figura invalida\n");
        return 0;
    }
    printf("volume = %.2f, area da superficie = %.2f\n",volume,area);
    return 0;
}
