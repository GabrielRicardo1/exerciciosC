/*Exercicio 5
Desenvolver um algoritmo para pedir um mes e ano e exibir o numero de dias do mes / ano digitados.*/

#include <stdio.h>

int main() {
    int mes,ano,dias;
    printf("informe o mes (1-12): ");
    scanf("%d",&mes);
    printf("informe o ano: ");
    scanf("%d",&ano);
    if(mes==2){
        if((ano%4==0 && ano%100!=0) || (ano%400==0)) dias=29;
        else dias=28;
    } else if(mes==4 || mes==6 || mes==9 || mes==11) dias=30;
    else dias=31;
    printf("o mes %d do ano %d tem %d dias\n",mes,ano,dias);
    return 0;
}
