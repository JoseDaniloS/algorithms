#include <stdio.h>
#include <locale.h>

//PROTÓTIPO DA FUNÇÃO
void verificador(int valor);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR INTEIRO
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//CHAMADA DA FUNÇÃO "verificador"
	verificador(x);
	
	return 0;
}

//FUNÇÃO PARA VERIFICAR SE O VALOR INSERIDO É OU NÃO MULTIPLO DE 5.
void verificador(int valor){
	if(valor % 5 == 0){
		printf("%i é Multiplo de 5",valor);	
	}
	else{
		printf("%i Não é Multiplo de 5",valor);	
	}
}