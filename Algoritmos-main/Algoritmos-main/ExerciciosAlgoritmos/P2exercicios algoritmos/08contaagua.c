/*Exercicio 8
Desenvolver um algoritmo para calcular a conta de agua para a SANEAGO. O custo da agua varia dependendo se o consumidor e residencial, comercial ou industrial. A regra para calcular a conta e:
 Residencial: R$5,00 de taxa mais R$0,05 por m gastos;
 Comercial: R$500,00 para os primeiros 80 m gastos mais R$0,25 por m gastos;
 Industrial: R$800,00 para os primeiros 100 m gastos mais R$0,04 por m gastos;
O programa devera ler a conta do cliente, consumo de agua por metros cubicos e o tipo de consumidor ( residencial, comercial e industrial ). Como resultado, imprima a
conta do cliente e o valor real a ser pago pelo mesmo.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char tipo[20];
    int m;
    float conta;
    printf("informe o tipo de consumidor (residencial/comercial/industrial): ");
    scanf("%s",tipo);
    printf("informe o consumo de agua em m3: ");
    scanf("%d",&m);
    if(strcmp(tipo,"residencial")==0)
        conta = 5 + 0.05*m;
    else if(strcmp(tipo,"comercial")==0)
        conta = 500 + 0.25*m;
    else if(strcmp(tipo,"industrial")==0)
        conta = 800 + 0.04*m;
    else {
        printf("tipo de consumidor invalido\n");
        return 0;
    }
    printf("o valor da conta do consumidor %s com consumo de %d m3 é %.2f R$\n",tipo,m,conta);
    return 0;
}
