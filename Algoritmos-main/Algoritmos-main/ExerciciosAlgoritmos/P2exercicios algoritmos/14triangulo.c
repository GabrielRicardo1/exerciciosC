/*Exercicio 14
Fazer um algoritmo que dado tres valores A, B e C verificar se eles formam um triangulo. Formando triangulo, dizer se
eh triangulo equilatero, isosceles ou escaleno.*/

#include <stdio.h>

int main() {
    float a,b,c;
    printf("informe o valor de A: ");
    scanf("%f",&a);
    printf("informe o valor de B: ");
    scanf("%f",&b);
    printf("informe o valor de C: ");
    scanf("%f",&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("forma um triangulo: ");
        if(a==b && b==c) printf("equilatero\n");
        else if(a==b || b==c || a==c) printf("isosceles\n");
        else printf("escaleno\n");
    } else {
        printf("nao forma um triangulo\n");
    }
    return 0;
}
