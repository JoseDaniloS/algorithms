#include <stdio.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int cont, x = 0 ;
	
	//ESTRUTURA DE REPETIÇÃO DE 0 ATE 500
	for(cont = 0; cont <= 500; cont++){
		
		//SOMA DE X = CONT + X
		x += cont;
		
	}
		
	//EXIBINDO O SOMATORIO DE 0 ATE 500
	printf("%i", x);	
		
	return 0;
}
