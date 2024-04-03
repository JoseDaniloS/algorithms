#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E VETOR
	int i, soma = 0, v[5];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL, "Portuguese");
	
	//LOOPING PARA ARMAZENAR 5 VALORES NO VETOR
	for(i = 0; i < 5; i++){
		printf("Digite o %i valor: ", i + 1);
		scanf("%i", &v[i]);
	}
	
	
	//LOOPING PARA SOMAR OS 5 VALORES DO VETOR
	for(i = 0; i< 5; i++){
		soma = soma + v[i];
	}
	
	//EXIBINDO A SOMA DOS VALORES INSERIDOS NO VETOR
	printf("A soma dos valores do vetor é: %i ", soma);
	
	return 0;
}