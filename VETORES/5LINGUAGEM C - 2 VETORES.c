#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E VETORES
	int i;
	float a[5], b[5];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL, "Portuguese");
	
	
	//LOOPING PARA SOLICITAR AO USUARIO 5 VALORES PARA O VETOR (A)
	for (i = 0; i < 5; i++){
		
		printf("Digite o %i número: ", i + 1);
		scanf("%f", &a[i]);
	}
	//LOOPING PARA VERIFICAR OS INDICES DOS VETORES
	for(i = 0; i < 5; i++){
		
		//SE O INDICE FOR 0 ELE APENAS REPITA O VALOR PARA A VETOR (B)
		if(i == 0){
			
			b[i] = a[i];
			
		}
		
		//SE O INDICE FOR PAR ELE MULTIPLIQUE POR 5 E COLOQUE NO VETOR (B)
		else if(i % 2 == 0){
			
			b[i] = a[i] * 5;
			
		}
		//SE O INDICE FOR IMPÁR ELE SOME COM 5 E COLOQUE NO VETOR (5)
		else if(i % 2 == 1){
			b[i] = a[i] + 5;
		}
	}
	
	//EXIBINDO OS VALORES DO VETOR A
	printf("Conteudo do vetor A\n");
	for(i = 0; i < 5; i++){
		printf("%.0f ", a[i]);
	}
	
	//EXIBINDO OS VALORES DO VETOR B
	printf("\nConteudo do vetor B\n");
	for(i = 0; i < 5; i++){
		printf("%.0f ", b[i]);
	}
	return 0;
}