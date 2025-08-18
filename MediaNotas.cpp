#include <stdio.h>

main() {
	char nome[40], curso[30];
	float nota1, nota2, nota3, nota4, media_nota;
	float pres1,pres2,pres3,pres4,media_presenca;
	
	printf("digite o nome do aluno: ");
	scanf("%s", nome);
	printf("Digite o nome do curso: ");
	scanf("%s", curso);	
	
	printf("Digite a nota do 1° semestre: ");
	scanf("%f", &nota1);
	printf("Digite a nota do 2° semestre: ");
	scanf("%f", &nota2);
	printf("Digite a nota do 3° semestre: ");
	scanf("%f", &nota3);
	printf("Digite a nota do 4° semestre: ");
	scanf("%f", &nota4);
	
	printf("Digite a presença do 1° semestre: ");
	scanf("%f", &pres1);
	printf("Digite a presença do 2° semestre: ");
	scanf("%f", &pres2);
	printf("Digite a presença do 3° semestre: ");
	scanf("%f", &pres3);
	printf("Digite a presença do 4° semestre: ");
	scanf("%f", &pres4);
	
	media_nota = (nota1 + nota2 + nota3 + nota4) / 4;
	media_presenca = ((pres1 + pres2 + pres3 + pres4) / 4) * 100;
	
	printf("\n=== RESULTADOS ===\n");
	printf("Nome do aluno: %s\n", nome);
	printf("Curso matriculado: %s\n", curso);
	printf("Médias das notas: %.2f\n", media_nota);
	printf("Percentual medio da presenca: %.2f \n", media_presenca);
	
	return 0;
}