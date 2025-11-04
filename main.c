#include <stdio.h> // Biblioteca padrão de entrada e saída que usei para o printf 
#include <stdlib.h> // Biblioteca da função rand
#include <time.h>
 
// Essas constantes vão servir para definir o número máximo de produtos e clientes
#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50
 
int main() {
    // Declaração das variáveis
    int i, numProdutos, numClientes;
    float preco[MAX_PRODUTOS];  // esse vetor armazena o preço de cada produto
    int compras[MAX_CLIENTES]; // e esse armazena o índice do produto comprado por cada cliente
    float total = 0;          // Variável que acumula o valor total de todas as vendas
 
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
 
    // Gera aleatoriamente a quantidade de produtos (entre 1 e MAX_PRODUTOS) no mínimo 1 e no máximo 200
    numProdutos = rand() % MAX_PRODUTOS + 1;
    
    // Mesma lógica da linha anterior, mas para a quantidade de clientes (entre 1 e MAX_CLIENTES) no máximo 50 clientes
    numClientes = rand() % MAX_CLIENTES + 1;
 
    // loop que gera o preço dos produtos:
    // Gera preços aleatórios entre R$5 e R$100 para cada produto
    // no caso aqui, para cada elemento de numProdutos ele vai definir um preço. 
    // sempre que definir o preco vai adicionar 1 ao contador, o que faz o código gerar o mesmo número de valores que o defiido em numProdutos
    for (i = 0; i < numProdutos; i++) {
        // Multiplica por 95 e somando 5, obtemos um valor entre 5.00 e 100.00
        preco[i] = 5 + ((float)rand() / RAND_MAX) * 95;
    }
 
    // Loop para simular as compras dos clientes:
    for (i = 0; i < numClientes; i++) {
        
        // Cada cliente "escolhe" aleatoriamente um produto (índice entre 0 e numProdutos-1)
        compras[i] = rand() % numProdutos;
        
        // Soma o preço do produto comprado ao total de vendas
        total += preco[compras[i]];
    }
 
    // Saída formatada da forma solicitada. 
    printf("Simulacao para:\n");
    printf("  %d produtos\n", numProdutos);  // Exibe o número total de produtos gerados
    printf("  %d clientes\n", numClientes); // Exibe o número total de clientes gerados
    printf("-----------------------------\n");
    printf("Cliente   Produto   Valor (R$)\n");
    printf("-----------------------------\n");
 
    // esse loop exibe os detalhes de cada compra
    for (i = 0; i < numClientes; i++) {
        // Exibe o número do cliente, o índice do produto comprado e o valor pago
        // esse %-9d alinha à esquerda com largura de 9 caracteres
        // %10.2f exibe o valor com 2 casas decimais, alinhado à direita com largura de 10
        printf("%-9d %-9d %10.2f\n", i, compras[i], preco[compras[i]]);
    }
 
    printf("-----------------------------\n");
    printf("TOTAL DE VENDAS     %10.2f\n", total);
    
    // Programa finaliza aqui. como é tudo automatico (sem input) não foi necessário fazer tratativas de erro... 
    // geralmente os erros estão entre o monitor e a cadeira
    return 0;
}