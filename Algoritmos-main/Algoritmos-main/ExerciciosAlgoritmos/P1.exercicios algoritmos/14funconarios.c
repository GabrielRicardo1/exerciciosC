/*14. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após
o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o
aumento e o salário final.*/

#include <stdio.h>

int main() {
    float s,inicial,aumento,final;
    printf("informe o salario do funcionario: ");
    scanf("%f",&s);
    aumento = s + s*0.15;
    final = aumento - aumento*0.08;
    printf("salario inicial: %.2f R$\n",s);
    printf("salario com aumento: %.2f R$\n",aumento);
    printf("salario final apos imposto: %.2f R$\n",final);
    return 0;
}
