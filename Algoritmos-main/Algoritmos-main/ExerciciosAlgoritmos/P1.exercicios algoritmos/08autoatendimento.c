/*8. Faça um algoritmo para um terminal de auto-atendimento bancário que realiza
saques em dinheiro. O programa deve solicitar ao usuário qual o valor a ser retirado e
deve exibir na tela qual a quantidade de cada cédula será entregue ao usuário. O
programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina
possui apenas cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contem a
quantidade de cédulas na seguinte ordem: 10,5,1.*/

#include <stdio.h>

int main() {
    int valor, n10, n5, n1;
    printf("informe o valor do saque: ");
    scanf("%d",&valor);
    n10 = valor/10;
    valor = valor%10;
    n5 = valor/5;
    valor = valor%5;
    n1 = valor;
    printf("cedulas de 10: %d\ncedulas de 5: %d\ncedulas de 1: %d\n",n10,n5,n1);
    return 0;
}
