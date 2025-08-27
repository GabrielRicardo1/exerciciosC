/*19. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um algoritmo para ler os dados necessários
e calcular a altura do prédio.
*/

#include <stdio.h>

int main() {
    float hs, hp, altura, sombrap;
    printf("informe sua altura: ");
    scanf("%f",&altura);
    printf("informe o tamanho da sua sombra: ");
    scanf("%f",&hs);
    printf("informe o tamanho da sombra do predio: ");
    scanf("%f",&sombrap);
    hp = (sombrap*altura)/hs;
    printf("a altura do predio é %.2f\n",hp);
    return 0;
}
