/*7. Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: no
primeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e
B.
*/

//7a. usando terceira variavel
#include <stdio.h>

int main() {
    float a,b,temp;
    printf("informe o valor de A: ");
    scanf("%f",&a);
    printf("informe o valor de B: ");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("apos a troca: A=%.2f, B=%.2f\n",a,b);
    return 0;
}
