#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E VETOR
	int i, A[8];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL, "Portuguese");
	
	//LOOPING PARA ARMAZENAR 8 VALORES DE 0 ATE 7
	for(i = 0; i < 8; i++){
		printf("Digite o %i número: ", i + 1);
		scanf("%i", &A[i]);
	}
	//EXIBINDO OS VALORES AO INVERSO = DO 7 ATE O 0
	for(i = 7; i >= 0; i--){
		printf("%i", A[i]);
	}
	
	return 0;
}