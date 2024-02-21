#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int n1, n2 ;
	
	//COLOCANDO O IDIOMA EM PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O PRIMEIRO NÚMERO
	printf("Digite o Primeiro Número:\n");
	scanf("%i", &n1);
	
	//SOLIÇITANDO O SEGUNDO NÚMERO
	printf("Digite o Segundo Número:\n");
	scanf("%i", &n2);
	
	//EXIBINDO O DOBRO DO PRIMEIRO NÚMERO
	printf("O Dobro do Primeiro Número é: %i\n", (n1*2));
	
	//EXIBINDO O TRIPLO DO SEGUNDO NÚMERO
	printf("O Triplo do Segundo Número é: %i\n", (n2*3));
	
	
	return(0);
}