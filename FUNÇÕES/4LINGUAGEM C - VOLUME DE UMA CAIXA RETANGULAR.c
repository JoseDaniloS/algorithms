#include <stdio.h>
#include <locale.h>

//PROTÓTIPO DA FUNÇÃO
float verificador(float comprimento, float largura, float altura);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float x, y, z, volume;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO ÚSUARIO O COMPRIMENTO, LARGURA E ALTURA DA CAIXA
	printf("Informe o Comprimento: ");
	scanf("%f", &x);
	printf("Informe o Largura: ");
	scanf("%f", &y);
	printf("Informe o Altura: ");
	scanf("%f", &z);
	
	//CHAMADA DA FUNÇÃO "verificador"
	volume = verificador(x, y, z);
	
	//EXIBINDO O VALOR DO VOLUME DA CAIXA RETANGULAR
	printf("O volume da caixa retangular é %.2f", volume);
	
	return 0;
}

//FUNÇÃO PARA CALCULAR O VOLUME DE UMA CAIXA RETANGULAR
float verificador(float comprimento, float largura, float altura){
	
	//DEFINIÇÃO DE VARIAVEIS
	float volume;
	
	//CALCULO DO VOLUIME DA CAIXA
	volume = (comprimento * largura * altura);
	
	//RETORNANDO A FUNÇÃO PRINCIPAL O RESULTADO DO CALCULO
	return(volume);
}