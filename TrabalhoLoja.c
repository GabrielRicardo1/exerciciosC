#include <stdio.h> // Biblioteca padrao de entrada e saida que usei para o printf 
#include <stdlib.h> // Biblioteca da funcao rand
#include <time.h>

// Coloquei umas coisas a mais para brincar um pouco e testar!
// escrevi tudo sem acento por costume (e pq o compilador online que uso no trabalho nao estava aceitando os caracteres especiais)
// Gabriel Couto, Roger Eduardo e Joao Penegrin

// Essas constantes vao servir para definir o numero maximo de produtos e clientes
#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50

int main() {
	char opcao = 's'; // variavel para controlar repeticao

	// loop principal
	while (1) {
		if (opcao != 's' && opcao != 'S') { // acho que nem tem muito o que comentar nesse while... C) bem intuitivo
			if (opcao == 'n' || opcao == 'N') {
				printf("\n\nTchau tchau professor :)\n");
			} else {
				printf("\n\nOpcao invalida. Encerrando o programa.");
			}
			break;
		}

		// Declaracao das variaveis
		int i, numProdutos, numClientes;
		float preco[MAX_PRODUTOS];  // esse vetor armazena o preco de cada produto
		int compras[MAX_CLIENTES]; // e esse armazena os produtos comprados por cada cliente
		float total = 0;          // Variavel que acumula o valor total de todas as vendas

		// Inicializa o gerador de numeros aleatorios com base no tempo atual
		srand(time(NULL));

		// Gera aleatoriamente a quantidade de produtos (entre 1 e MAX_PRODUTOS) no minimo 1 e no maximo 200
		numProdutos = (rand() % MAX_PRODUTOS) + 1; // garante pelo menos 1

		// Mesma logica da linha de antes, mas para a quantidade de clientes (entre 1 e MAX_CLIENTES) no maximo 50 clientes
		numClientes = (rand() % MAX_CLIENTES) + 1; // garante pelo menos 1

		// loop que gera o preco dos produtos:
		// Gera precos aleatorios entre R$5 e R$100 para cada produto.
		for (i = 0; i < numProdutos; i++) {
			preco[i] = 5 + ((float)rand() / RAND_MAX) * 95;
		}

		// Loop pra simular as compras dos clientes:
		for (i = 0; i < numClientes; i++) {
			compras[i] = rand() % numProdutos;
			total += preco[compras[i]];
		}

		// Saida formatada da forma que foi pedido no slide.
		printf("Simulacao para:\n");
		printf("  %d produtos\n", numProdutos);
		printf("  %d clientes\n", numClientes);
		printf("-----------------------------\n");
		printf("Cliente   Produto   Valor (R$)\n");
		printf("-----------------------------\n");

		// esse loop mostra os detalhes de cada compra feita
        for (i = 0; i < numClientes; i++) {
            // Exibe o numero do cliente, o indice do produto comprado (tambem somando +1 para exibir a partir de 1),
            // e o valor que o cliente pagou pelo produto comprado.
            // %-9d alinha o numero do cliente a esquerda com largura de 9 caracteres
            // o outro %-9d alinha o numero do produto a esquerda com largura de 9 caracteres
            // %10.2f exibe o valor com 2 casas decimais, alinhado a direita com largura de 10 (isso aqui tive que pesquisar como fazia)
            printf("%-9d %-9d %10.2f\n", i + 1, compras[i] + 1, preco[compras[i]]);
        }

		printf("-----------------------------\n");
		printf("TOTAL DE VENDAS     %10.2f\n", total);

		// opcao pra repetir ou sair
		printf("\nDeseja testar novamente com nova execucao? (s para sim / n para nao): ");
		scanf(" %c", &opcao);
	}

	return 0;
}
