//5. Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
//algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
//carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
//informar qual o valor em R$ a ser gasto com combustível na viagem.

#include <stdio.h>

int main() {
    float d,c,p,g;
    printf("informe a distancia em km: ");
    scanf("%f",&d);
    printf("informe o consumo do carro em km/l: ");
    scanf("%f",&c);
    printf("informe o preco do litro do combustivel: ");
    scanf("%f",&p);
    g=(d/c)*p;
    printf("para percorrer %.2f km, gastando %.2f km/l com combustivel de %.2f R$ por litro, voce gastara %.2f R$\n",d,c,p,g);
    return 0;
}
