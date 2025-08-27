/*10. A padaria AJB vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o
dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as
quantidades de pães e de broas, e depois calcular os dados solicitados.*/

#include <stdio.h>

int main() {
    int paes, broas;
    float total, poupança;
    printf("informe a quantidade de paes: ");
    scanf("%d",&paes);
    printf("informe a quantidade de broas: ");
    scanf("%d",&broas);
    total = paes*0.12 + broas*1.50;
    poupança = total*0.10;
    printf("o total arrecadado é %.2f R$\n",total);
    printf("o valor a guardar na poupanca é %.2f R$\n",poupança);
    return 0;
}
