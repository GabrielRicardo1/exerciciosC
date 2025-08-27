/*18. A granja galinha feliz possui um controle automatizado de cada frango da sua
produção. No pé direito do frango há um anel com um chip de identificação; no pé
esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo
que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo
para calcular o gasto total da granja para marcar todos os seus frangos.*/

#include <stdio.h>

int main() {
    int n;
    float total;
    printf("informe a quantidade de frangos: ");
    scanf("%d",&n);
    total = n*4 + n*2*3.50;
    printf("o gasto total para marcar %d frangos é %.2f R$\n",n,total);
    return 0;
}
