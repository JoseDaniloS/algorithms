#include <stdio.h>
#include <locale.h>

int main(){
	
	//MUDANDO O IDIOMA 
	setlocale(LC_ALL,"Portuguese");
	
	//DEFININDO VARIAVEIS
	int cont, x = 0;
	
	//REPETIÇÃO DE 0 ATE 50
	for(cont = 0; cont <= 50; cont ++){
		
		//VERIFICA SE O NUMERO É DIVISIVEL POR 2
		if(cont % 2 == 0){
			
			//CONTA QUANTOS NUMEROS SÃO DIVISIVEIS
			x++;
			
			//IMPRIME O NUMERO DIVISIVEL POR 2
			printf("%i \n", cont);
		}
	}	
	//IMPRIME QUANTOS NUMEROS EXISTEM DIVISIVEIS POR 2 ENTRE 0 E 50
	printf("Existem %i Números divisiveis por 2 entre 0 e 50",x);
	return 0;
}