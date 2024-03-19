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

//FUNÇÃO PARA VERIFICAR SE O VALOR INSERIDO É NEUTRO, POSITIVO OU NEGATIVO.
void verificador(int valor){
	if(valor == 0){
		printf("%i é Neutro",valor);	
	}
	else if(valor > 0){
		printf("%i é Positivo",valor);	
	}
	else{
		printf("%i é Negativo",valor);	
	}
}