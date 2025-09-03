#include <stdio.h>
#include <string.h>

int main() {
	char pilha[5][50];
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite o nome do livro %d:", 1 + i);
		scanf(" %[^ \n]", pilha[i]);
	}
	printf("\n Livros na estante-{pilha}:\n");
		
	for (i = 0; i < 5; i++) {
		printf("%d - %s \n", i + 1, pilha[i]);
	}
	
	printf("\n Retirando os livros (um por um): \n");
	for (i = 4; i >= 0; i--) {
		printf("Retirando: %s\n", pilha[i]);
	}
	printf("\nEstante vazia\n");
	
	return 0;
}