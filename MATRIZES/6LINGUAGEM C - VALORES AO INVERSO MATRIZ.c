#include <stdio.h>
#include <locale.h>

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E MATRIZES
	int n[3][3];
	int i, j;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//LOOPING PARA IDENTIFICAR A LINHA DA MATRIZ
	for(i = 0; i < 3; i++){
		
		printf("%iº Linha:\n", i + 1);
		
		//LOOPING PARA IDENTIFICAR A COLUNA DA MATRIZ
		for(j = 0; j < 3; j++){
			
			//SOLICITANDO OS VALORES PARA ARMAZENAR NA MATRIZ
			printf("Digite o %i número:  ", i + 1);
			scanf("%i", &n[i][j]);
			
		}
		
	}
	
	//LOOPING PARA EXIBIR OS VALORES DA MATRIZ AO CONTRARIO
	//LINHA
	for(i = 2; i >= 0; i--){
		
		//COLUNA
		for(j = 2; j >= 0; j--){
			
			printf("%i ",n[i][j]);
			
		}
		
	}
	
	
	
	return 0;
}