//16. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
//Faça um algoritmo para ler uma temperatura Celsius e imprimí-Ia em Fahrenheit
//(pesquise como fazer este tipo de conversão).

#include <stdio.h>

int main() {
    float c,f;
    printf("informe a temperatura em Celsius: ");
    scanf("%f",&c);
    f = c*9/5 + 32;
    printf("%.2f Celsius equivalem a %.2f Fahrenheit\n",c,f);
    return 0;
}
