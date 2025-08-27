//11. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
//sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).

#include <stdio.h>

int main() {
    float n1,n2,n3,media;
    printf("informe a primeira nota: ");
    scanf("%f",&n1);
    printf("informe a segunda nota: ");
    scanf("%f",&n2);
    printf("informe a terceira nota: ");
    scanf("%f",&n3);
    media = (n1*1 + n2*2 + n3*3)/6;
    printf("a media ponderada das notas %.2f, %.2f e %.2f é %.2f\n",n1,n2,n3,media);
    return 0;
}
