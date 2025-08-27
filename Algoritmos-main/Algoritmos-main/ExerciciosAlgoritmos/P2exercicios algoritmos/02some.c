/*Dados quatro numeros distintos, desenvolver um algoritmo que determine e imprima a soma dos tres menores.*/

#include <stdio.h>

int main() {
    int a,b,c,d,menor1,menor2,menor3,soma;
    printf("informe quatro numeros distintos: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){int t=a;a=b;b=t;} 
    if(c>d){int t=c;c=d;d=t;} 
    if(a>c){int t=a;a=c;c=t;} 
    if(b>d){int t=b;b=d;d=t;} 
    if(b>c){int t=b;b=c;c=t;} 
    soma = a + b + c;
    printf("a soma dos tres menores numeros é %d\n",soma);
    return 0;
}
