/*12. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma
sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a
uma venda, e a máquina informe quanto será o valor arrecadado.*/

#include <stdio.h>

int main() {
    int p,m,g;
    float total;
    printf("informe a quantidade de camisetas pequenas: ");
    scanf("%d",&p);
    printf("informe a quantidade de camisetas medias: ");
    scanf("%d",&m);
    printf("informe a quantidade de camisetas grandes: ");
    scanf("%d",&g);
    total = p*10 + m*12 + g*15;
    printf("o valor total arrecadado é %.2f R$\n",total);
    return 0;
}
