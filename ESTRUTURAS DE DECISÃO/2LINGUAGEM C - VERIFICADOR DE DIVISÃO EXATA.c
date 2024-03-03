#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFININDO AS VARIAVEIS
	int x, y ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO O PRIMEIRO NÚMERO
	printf("Digite O Númerador Inteiro: ");
	scanf("%i", &x);
	
	//SOLICITANDO AO USUARIO O SEGUNDO NÚMERO
	printf("Digite O Denominador Inteiro: ");
	scanf("%i", &y);
	
	//VERIFICANDO SE O DENOMINADOR É DIFERENTE DE 0
	if(y == 0){
		printf("Não é possivel realizar essa operação.");
		return 0;
	}
	
	else{
		//VERIFICANDO SE A DIVISÃO DO PRIMEIRO NUMERO PELO SEGUNDO É EXATA. OU SEJA
		// DA RESTO 0.
		if(x % y == 0){
			
			printf("É divisivel!");
		}
		//EXEBINDO A MENSAGEM "NÃO É DIVISIVEL" CASO NÃO SEJA.
		else
		{
			printf("Não é divisivel!");
		}	
	}
	
	return 0;
}