#include <stdio.h>
#include <locale.h>

//FUNÇÃO PRICIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int n, m , i, j, cont = 1;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO QUANTAS LINHAS E QUANTAS COLUNAS ELE DESEJA NA MATRIZ
	printf("Quantas linhas você deseja na matriz? ");
	scanf("%i", &n);
	printf("\nQuantas colunas você deseja na matriz? ");
	scanf("%i", &m);
	
	//DEFININDO AS MATRIZES
	int A[n][m],B[n][m];
	
	//LOOPING PARA SOLICITAR OS VALORES DA MATRIZ 'A'
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("Digite o %iº valor: ", cont++);
			scanf("%i", &A[i][j]);
		}
	}
	
	//LOOPING PARA MULTIPLICAR OS VALORES DA MATRIZ 'A' POR 3 E INSERIR NA MATRIZ 'B'
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			B[i][j] = (A[i][j] * 3);
		}
	}
	
	//EXIBINDO OS VALORES DA MATRIZ 'A'
	printf("VALORES DA MATRIZ 'A'\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			   printf("%i ", A[i][j]);	
		}
		printf("\n");
	}
	
	//EXIBINDO OS VALORES DA MATRIZ 'B'
	printf("VALORES DA MATRIZ 'B'\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			   printf("%i ", B[i][j]);	
		}
		printf("\n");
	}
	return 0;
}