/*Exercicio 4
Desenvolver um algoritmo para ler um numero x e calcular e imprimir o valor de y de acordo com as condicoes abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = xelevado a 2 , se x > 1;
*/

#include <stdio.h>

int main() {
    float x,y;
    printf("informe o valor de x: ");
    scanf("%f",&x);
    if(x<1) y = x;
    else if(x==1) y = 0;
    else y = x*x;
    printf("para x=%.2f, y=%.2f\n",x,y);
    return 0;
}
