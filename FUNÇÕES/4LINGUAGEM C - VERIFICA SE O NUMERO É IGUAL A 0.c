#include <stdio.h>
#include <locale.h>

//PROTOTIPO DA FUNÇÃO
void function(int valor);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//CHAMANDO A FUNÇÃO QUE VAI VERIFICAR SE O NÚMERO INFORMADO É IGUAL A ZERO
	function(x);
	
	return(0);
}

//DEFINIÇÃO DA FUNÇÃO
void function(int valor){
	if(valor == 0){
		printf("%i é igual a zero!", valor);
	}
	
	else{
		printf("O número informado não é igual a zero!");
	}
}