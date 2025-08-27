/*
Exercicio 15
Fazer um algoritmo que dado os lados de um triangulo A, B e C. Dizer se os lados formam um triangulo:
 Retangulo = (Aelevado a 2 = Belevado a 2 + Celevado a 2);
 Obtusangulo = (Aelevado a 2 > Belevado a 2 + Celevado a 2);
 Acutangulo = (Aelevado a 2 < Belevado a 2 + Celevado a 2) ;*/ 

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    printf("informe o lado A: ");
    scanf("%f",&a);
    printf("informe o lado B: ");
    scanf("%f",&b);
    printf("informe o lado C: ");
    scanf("%f",&c);
    if(a+b>c && a+c>b && b+c>a){
        if(fabs(a*a - (b*b + c*c)) < 0.0001) printf("triangulo retangulo\n");
        else if(a*a > b*b + c*c) printf("triangulo obtusangulo\n");
        else printf("triangulo acutangulo\n");
    } else {
        printf("nao forma um triangulo\n");
    }
    return 0;
}
