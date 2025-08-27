/*Exercicio 11
Um certo aco e classificado de acordo com o resultado de tres testes abaixo, que devem determinar
se o mesmo satisfaz as especificacoes:

1. Conteudo de Carbono abaixo de 7;
2. Dureza Rockwell maior do que 50;
3. Resistencia a tracao maior do que 80.000 psi;*/

#include <stdio.h>

int main() {
    float carbono,dureza,tracao;
    printf("informe o conteudo de carbono: ");
    scanf("%f",&carbono);
    printf("informe a dureza Rockwell: ");
    scanf("%f",&dureza);
    printf("informe a resistencia a tracao (psi): ");
    scanf("%f",&tracao);
    if(carbono<7 && dureza>50 && tracao>80000)
        printf("o aco satisfaz as especificacoes\n");
    else
        printf("o aco nao satisfaz as especificacoes\n");
    return 0;
}
