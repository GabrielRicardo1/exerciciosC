/*
Exercicio 9
Uma locadora de filmes tem a seguinte regra para aluguel de fitas.
 As segundas, tercas e quintas (2, 3 e 5): um desconto de 40% em cima do preco normal;
 As quartas, sextas, sabados e domingos (4, 6, 7 e 1): preco normal;
 Aluguel de fitas comuns: preco normal e aluguel de lancamentos: acrescimo de 15% em cima do preco normal.*/

#include <stdio.h>
#include <string.h>

int main() {
    int dia;
    char tipo[20];
    float preco, valor;
    printf("informe o preco normal do filme: ");
    scanf("%f",&preco);
    printf("informe o dia da semana (1-domingo, 2-segunda,...7-sabado): ");
    scanf("%d",&dia);
    printf("informe o tipo de filme (comum/lancamento): ");
    scanf("%s",tipo);
    valor = preco;
    if(dia==2 || dia==3 || dia==5) valor = valor*0.6;
    if(strcmp(tipo,"lancamento")==0) valor = valor*1.15;
    printf("o valor do aluguel é %.2f R$\n",valor);
    return 0;
}
