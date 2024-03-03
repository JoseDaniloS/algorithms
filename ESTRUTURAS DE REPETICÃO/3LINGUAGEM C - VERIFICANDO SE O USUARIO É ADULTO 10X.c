#include <stdio.h>
#include <locale.h>

int main(){

	//MUDANDO O IDIOMA	
	setlocale(LC_ALL,"Portuguese");
	
	//DEFININDO VARIAVEIS
	int cont = 0, x ;
	
	//LOOPING DE 1 ATE 10
	for (cont = 1; cont <= 10; cont++) {
		
		//SOLICITANDO A IDADE AO USUARIO
		printf("%iª Idade: ", cont);
		scanf("%i", &x);
		
		//VERIFICANDO SE ELE É ADULTO
		if(x >= 18){
			printf("Você é um adulto \n");
		}
		else{
			printf("Você não é adulto! \n");	
		}
	}
	return 0;
}