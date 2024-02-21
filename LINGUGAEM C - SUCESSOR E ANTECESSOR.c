#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float x ;
	
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITA AO USUARIO UM NUMERO
	printf("Digite um Número:");
	scanf("%f", &x);
	
	//O ANTECESSOR DO NUMERO
	printf("O Antecessor do Numero Digitado é:  %f \n", (x-1));
	
	//O SUCESSOR DO NÚMERO
	printf("O Sucessor do Numero Digitado é:  %f", (x+1));
	
	
	
	
	return(0);
}