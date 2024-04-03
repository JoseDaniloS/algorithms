#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEISE VETOR
	int i, maior, menor, v[10];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL, "Portuguese");
	
	
	//LOOPING SOLICITANDO 10 NUMEROS AO USUARIO
	for(i = 0; i < 10; i++){
		printf("Digite o %i número: ", i + 1);
		scanf("%i", &v[i]);
	}
	
	//LOOPING PARA VERIFICAR QUAL MAIOR E O MENOR NÚMERO DO VETOR
	for(i = 0; i < 10; i++){
			
			if(v[i] > maior){
				
				maior = v[i];
				
				
			}
			if(v[i] < menor){
				menor = v[i];
			}
			
	}
	
	//EXIBINDO QUAIS SÃO O MAIOR E O MENOR NUMERO DO VETOR
	printf("O maior número do vetor é: %i \n", maior);
	printf("O menor número do vetor é: %i", menor);
		
	
	return 0;
}