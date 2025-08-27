/*Exercicio 7
Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionario pelo governo. Seu programa devera ler o valor do salario minimo,
o n de dependentes, o salario do funcionario e o taxa de imposto normal que ja foi paga pelo funcionario. O imposto bruto e:
 20% do salario do funcionario se o funcionario ganha mais de 12 salarios minimos;
 8% do salario do funcionario se o funcionario ganha mais de 5 salarios minimos e
 Quem ganha menos ou igual de 5 salarios minimos nao e cobrado o imposto de renda.
Obs.: Sabe-se que o governo cobra 4% de taxa adicional sobre o IMPOSTO BRUTO.
*/

#include <stdio.h>

int main() {
    float sm, sal, taxa_normal, imposto_bruto, imposto_final;
    int dep;
    printf("informe o valor do salario minimo: ");
    scanf("%f",&sm);
    printf("informe o numero de dependentes: ");
    scanf("%d",&dep);
    printf("informe o salario do funcionario: ");
    scanf("%f",&sal);
    printf("informe a taxa de imposto ja paga: ");
    scanf("%f",&taxa_normal);
    if(sal > 12*sm) imposto_bruto = sal*0.20;
    else if(sal > 5*sm) imposto_bruto = sal*0.08;
    else imposto_bruto = 0;
    imposto_final = imposto_bruto + imposto_bruto*0.04 - taxa_normal;
    printf("imposto bruto: %.2f\n",imposto_bruto);
    printf("imposto final a pagar apos taxa adicional e desconto de imposto normal: %.2f\n",imposto_final);
    return 0;
}
