/*Exercicio 12
Fazer um algoritmo que dado um numero, calcular e escrever se este e positivo ou negativo, e multiplo ou nao de 3, ao mesmo tempo.*/

#include <stdio.h>

int main() {
    int n;
    printf("informe um numero: ");
    scanf("%d",&n);
    if(n>0) printf("o numero %d é positivo\n",n);
    else if(n<0) printf("o numero %d é negativo\n",n);
    else printf("o numero é zero\n");
    if(n%3==0) printf("o numero %d é multiplo de 3\n",n);
    else printf("o numero %d nao é multiplo de 3\n",n);
    return 0;
}
