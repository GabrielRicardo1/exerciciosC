//3. Faça um algoritmo que calcule a velocidade média de um trajeto com base na distância percorrida e no tempo (em decimal) usado para isso.
#include <stdio.h>

int main() {
    float d,t;
    printf("informe a distancia que sera percorrida: ");
    scanf("%f",&d);
    printf("informe o tempo (decimal) que vai demorar: ");
    scanf("%f",&t);
    printf("a velocidade media para %.2f km em %.2f h é %.2f km/h\n",d,t,d/t);
    return 0;
}
