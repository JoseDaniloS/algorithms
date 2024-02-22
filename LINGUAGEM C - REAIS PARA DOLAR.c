#include <stdio.h>
#include <locale.h>


int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float dolar, reais ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO A COTAÇÃO ATUAL DO DOLAR
	printf("Qual a cotação do dolar atualmente?");
	scanf("%f", &dolar);

	//SOLICITANDO A QUANTIDADE DE REAIS QUE SERÃO CONVERTIDOS
	printf("\nQuantos reais você deseja converter?");
	scanf("%f", &reais);
	
	//CONVERSÃO DE REAIS PARA DOLARES
	dolar = reais / dolar ;
	
	//EXIBINDO QUANTOS REAIS FORAM CONVERTIDOS EM DOLARES
	printf("\n %.2f Reais foram convertidos em %.2f Dolares.", reais, dolar);
		
	return(0);
}