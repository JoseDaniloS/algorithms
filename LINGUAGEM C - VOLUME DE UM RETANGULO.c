#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float volume, comprimento, largura, altura ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO A ALTURA DA CAIXA RETANGULAR AO USUARIO
	printf("Qual a altura da caixa retangular?");
	scanf("%f", &altura);
	
	//SOLICITANDO O COMPRIMENTO DA CAIXA RETANGULAR AO USUARIO
	printf("Qual o comprimento da caixa retangular?");
	scanf("%f", &comprimento);
	
	//SOLICITANDO A LARGURA DA CAIXA RETANGULAR AO USUARIO
	printf("Qual a largura da caixa retangular?");
	scanf("%f", &largura);
	
	//CALCULO DO VOLUME DE UMA CAIXA RETANGULAR
	volume = comprimento * largura * altura ;
	
	//EXIBINDO O VOLUME DA CAIXA RETANGULAR
	printf("O volume da caixa retangular é: %f ", volume);
	
	return 0;
}