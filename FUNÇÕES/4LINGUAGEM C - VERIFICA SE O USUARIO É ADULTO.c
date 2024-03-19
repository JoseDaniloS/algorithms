#include <stdio.h>
#include <locale.h>

//PROTÓTIPO DA FUNÇÃO
void verificador(int idade);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO SUA IDADE
	printf("Digite sua idade: ");
	scanf("%i", &x);
	
	//CHAMADA DA FUNÇÃO "verificador"
	verificador(x);
	
	return 0;
}

//FUNÇÃO PARA VERIFICAR SE O ÚSUARIO É ADULTO OU NÃO.
void verificador(int idade){
	if(idade >= 18){
		printf("Você é Adulto");	
	}
	else{
		printf("Você não é Adulto");	
	}
}