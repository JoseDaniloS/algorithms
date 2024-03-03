#include <stdio.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float x, f ;
	
	//SOLICITA AO USUARIO OS GRAUS CELCIUS
	printf("Digite os Graus Celcius: ");
	scanf("%f", &x);
	
	//CONVERTE CELCIUS PARA FAHRENHEIT
	f=((x*1.8)+32);
	
	//EXIBE OS GRAUS FAHRENHEIT
	printf("%.2f Em Fahrenheit.", f);
	
	return (0);
}