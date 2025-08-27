//7b. sem usar terceira variavel
#include <stdio.h>

int main() {
    float a,b;
    printf("informe o valor de A: ");
    scanf("%f",&a);
    printf("informe o valor de B: ");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("apos a troca: A=%.2f, B=%.2f\n",a,b);
    return 0;
}
