/*Exercício 3
Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equação do segundo grau e calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a classificação das raízes.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,delta,x1,x2;
    printf("informe o coeficiente a: ");
    scanf("%f",&a);
    printf("informe o coeficiente b: ");
    scanf("%f",&b);
    printf("informe o coeficiente c: ");
    scanf("%f",&c);
    delta = b*b - 4*a*c;
    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("as raizes sao reais e diferentes: x1=%.2f, x2=%.2f\n",x1,x2);
    } else if(delta == 0){
        x1 = -b/(2*a);
        printf("as raizes sao reais e iguais: x=%.2f\n",x1);
    } else {
        printf("as raizes sao complexas e nao podem ser calculadas\n");
    }
    return 0;
}
