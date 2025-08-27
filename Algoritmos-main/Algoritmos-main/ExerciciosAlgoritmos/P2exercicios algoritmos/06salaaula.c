/*
Exercicio 6
Desenvolver um algoritmo para ler o numero de uma sala de aula, sua capacidade e o total de alunos matriculados na mesma e imprimir uma linha mostrando o número da sala, sua capacidade, o número de cadeiras ocupadas e sua disponibilidade indicando se a sala está lotada ou não.
*/

#include <stdio.h>

int main() {
    int sala, capacidade, alunos;
    printf("informe o numero da sala: ");
    scanf("%d",&sala);
    printf("informe a capacidade da sala: ");
    scanf("%d",&capacidade);
    printf("informe o numero de alunos matriculados: ");
    scanf("%d",&alunos);
    printf("Sala %d | Capacidade: %d | Cadeiras ocupadas: %d | ",sala,capacidade,alunos);
    if(alunos>=capacidade) printf("LOTADA\n");
    else printf("DISPONIVEL\n");
    return 0;
}
