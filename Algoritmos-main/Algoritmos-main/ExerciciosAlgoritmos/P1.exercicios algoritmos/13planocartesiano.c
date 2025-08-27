//13. Construa um algoritmo para calcular a distância entre dois pontos do plano
//cartesiano. Cada ponto é um par ordenado (x,y).

#include <stdio.h>
#include <math.h>

int main() {
    float x1,y1,x2,y2,d;
    printf("informe o ponto 1 (x y): ");
    scanf("%f %f",&x1,&y1);
    printf("informe o ponto 2 (x y): ");
    scanf("%f %f",&x2,&y2);
    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("a distancia entre (%.2f,%.2f) e (%.2f,%.2f) é %.2f\n",x1,y1,x2,y2,d);
    return 0;
}
