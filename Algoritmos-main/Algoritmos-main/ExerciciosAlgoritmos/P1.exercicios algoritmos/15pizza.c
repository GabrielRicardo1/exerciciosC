//15. Calcule a área de uma pizza que possui um raio R (pi=3.14).

#include <stdio.h>

int main() {
    float r,area;
    printf("informe o raio da pizza: ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("a area da pizza com raio %.2f é %.2f\n",r,area);
    return 0;
}
