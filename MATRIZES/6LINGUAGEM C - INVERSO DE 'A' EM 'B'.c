#include <stdio.h>
#include <locale.h>

//FUNÇÃO PRINCIPAL 
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E MATRIZES
	int A[4][2], B[4][2];
	int i, j, k = 1;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//LOOPING PARA INSERIR OS VALORES NA MATRIZ 'A'
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("Digite o %i valor: ", k++);
			scanf("%i", &A[i][j]);
		}
		
	}
	
	//LOOPING PARA INSERIOR OS VALORES AO INVERSO DA MATRIZ 'A' NA MATRIZ 'B'
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			B[i][j] = A[3 - i][1 - j];
		}
		
	}
	
	//EXIBINDO OS VALORES DA MATRIZ 'A'
	printf("Valores da matriz 'A'\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			
			printf("%i ", A[i][j]);
			
		}
		printf("\n");
		
	}
	
	//EXIBINDO OS VALORES DA MATRIZ 'B'
	printf("\nValores da matriz 'B'\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			
			printf("%i ", B[i][j]);
			
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}