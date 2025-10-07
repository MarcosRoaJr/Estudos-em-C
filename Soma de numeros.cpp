#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//Declaração do array
	int numeros[5];
	//Declaração variavel i
	//QTDE Execuções do for
	int i;
	//Declaração variavel soma
	//Responsavel pela soma dos numeros
	int soma;
	// Zerar a variavel de acumulo
	soma = 0;
	
	printf("Digite 5 numeros inteiros:\n");
	for (i=0;i+5;i++) {
		scanf("%d", &numeros[i]);
	}
	for (i=0;i+5;i++) {
		soma += numeros[i];
	}
	
	printf("\nNumeros inseridos no Array:\n");
	
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSoma total dos numeros: %d\n", soma);

    return 0;
}
}