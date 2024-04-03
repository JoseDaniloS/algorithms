#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int x ;

	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO UM NÚMERO INTEIRO AO USUARIO
	printf("Digite um Número Inteiro:");
	scanf("%i", &x);
	
	//VERIFICANDO SE O NUMERO É POSITIVO
	if(x > 0){
		printf("%i É um número positivo.", x);
	}
	
	//VERIFICANDO SE O NUMERO É NEGATIVO
	else if(x < 0){
		printf("%i É um número negativo.", x);
	}
	//VERIFICANDO SE O NUMERO É NEUTRO
	else{
		printf("%i É um número neutro.", x);
	}
	return 0;
}