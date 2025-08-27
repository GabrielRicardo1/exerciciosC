/*17. A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
determinado funcionário. Considere que o salário líquido é igual ao salário bruto
descontando-se 10% de impostos.
*/

#include <stdio.h>

int main() {
    int hn,he;
    float bruto,liquido;
    printf("informe horas normais trabalhadas: ");
    scanf("%d",&hn);
    printf("informe horas extras trabalhadas: ");
    scanf("%d",&he);
    bruto = hn*10 + he*15;
    liquido = bruto - bruto*0.10;
    printf("salario bruto: %.2f R$\n",bruto);
    printf("salario liquido apos imposto: %.2f R$\n",liquido);
    return 0;
}
