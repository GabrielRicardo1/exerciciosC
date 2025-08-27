//Exercicio 1
//Desenvolver um algoritmo que leia um numero inteiro e verifique se o numero eh divisivel por 5 e por 3 ao mesmo tempo.

#include <stdio.h>

int main() {
    int n;
    printf("informe um numero inteiro: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
        printf("o numero %d eh divisivel por 3 e por 5\n",n);
    else
        printf("o numero %d nao eh divisivel por 3 e por 5 ao mesmo tempo\n",n);
    return 0;
}
