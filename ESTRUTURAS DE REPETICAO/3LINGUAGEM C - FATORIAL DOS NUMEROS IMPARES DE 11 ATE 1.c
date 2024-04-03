#include <stdio.h>



int main(){
	
	//DEFIINIÇÃO DE VARIAVEIS
	int cont, fatorial, x;
	
	//LOOPING DE 11 ATE 1
	for(cont = 11; cont >= 1; cont--){
		
		//VERIFICA SE O NUMERO É IMPAR
		if(cont % 2 != 0){
			
			//TODA VEZ QUE A CONDIÇÃO FOR SATISFEITA O FATORIAL VOLTA A SER 1
			fatorial = 1;
			
			//LOOPING DO NUMERO IMPAR ATE 1
			for(x = cont; x >= 1; x--){
				
			//CALCULA O FATORIAL 	
			fatorial = x * fatorial ;
			}		 	
		
		//EXIBE O FATORIAL E O RESULTADO				
		printf("%i! = %i\n", cont, fatorial);
		
		}
	}
	return 0;
}