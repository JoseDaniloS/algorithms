#include <stdio.h>
#include <locale.h>
#include <math.h>

//PROTÓTIPO DA FUNÇÃO
float verificador(float r);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float x, area ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO O VALOR DO RAIO DE UM CIRCULO
	printf("Digite O Valor Do Raio de um Circulo: ");
	scanf("%f", &x);
	
	//CHAMADA DA FUNÇÃO "verificador"
	area = verificador(x);
	
	printf("A Aréa da circunferencia é: %f", area);
	
	return 0;
}

//FUNÇÃO PARA CALCULAR A AREA DE UM CIRCULO
float verificador(float r){
	
	//DEFINIÇÃO DE VARIAVEIS
	float x ;
	
	//CALCULANDO A AREA DO CIRCULO
	x = (3.14 * pow(r, 2));
	
	//RETORNANDO O VALOR PARA A FUNÇÃO PRINCIPAL
	return(x);
	
}