#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS	
	float f ;
	
	//COLOCANDO O IDIOMA EM PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO A TEMPERATURA EM FAHRENHEIT
	printf("Digite A Temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	//EXIBE A CONVERSAO DE FAHRENHEIT PARA CELCIUS
	printf("\nA Conversão de Fahrenheit para Celcius é: %2.f", (f-32)/1.8);
	
	
	return 0;
}