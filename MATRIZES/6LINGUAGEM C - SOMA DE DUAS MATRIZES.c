#include <stdio.h>
#include <locale.h>

//FUNÇÃO PRINCIPAL
int main(){
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//DEFINIÇÃO DE VARIAVEIS E MATRIZES
	int A[2][3], B[2][3], C[2][3];
	int i, j;
	
	//SOLICITANDO OS VALORES DA PRIMEIRA MATRIZ
	printf("PRIMEIRA MATRIZ:\n");
	for(i = 0; i < 2; i++){
		printf("%iº Linha:\n", i + 1);
		for(j = 0; j < 3; j++){
			printf("Digite %i número: ", j + 1);
			scanf("%i", &A[i][j]);
		}
	}
	
	//SOLICITANDO OS VALORES DA SEGUNDA MATRIZ
	printf("\nSEGUNDA MATRIZ:\n");
	for(i = 0; i < 2; i++){
		printf("%iº Linha:\n", i + 1);
		for(j = 0; j < 3; j++){
			printf("Digite %i número: ", j + 1);
			scanf("%i", &B[i][j]);
		}
	}
	
	//CALCULANDO A SOMA DAS DUAS MATRIZES
	printf("SOMA DA MATRIZ 'A' COM A 'B':\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			
			C[i][j] = A[i][j] + B[i][j];
			
		}
	}
	
	//EXIBINDO O RESULTADO DAS SOMAS DAS MATRIZES
		printf("SOMA DA MATRIZ 'A' COM A 'B':\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			
			printf("%i ", C[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}