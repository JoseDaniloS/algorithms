#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float n1 ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O NUMERO AO USUARIO
	printf("Digite um Número: ");
	scanf("%f", &n1);
	
	//EXIBINDO O CUBO DO NUMERO AO USUARIO
	printf("O Cubo do Número Informado é: %.0f", pow(n1,3));
	
	
	
	return 0;
}