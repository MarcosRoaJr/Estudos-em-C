#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//Declara��o do array
	int numeros[5];
	//Declara��o variavel i
	//QTDE Execu��es do for
	int i;
	//Declara��o variavel soma
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

����return�0;
}
}