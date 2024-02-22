#include <stdio.h> //BIBLIOTECA PARA O USO DO PRINTF E SCANF
#include <locale.h> //BIBLIOTECA PARA MUDAR O IDIOMA
#include <math.h> //BIBLIOTECA PARA OPERAÇÕES MATEMATICAS

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	float area, raio ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O RAIO DE UM CIRCULO
	printf("Digite o Valor do raio de um circulo:");
	scanf("%f", &raio);
	
	//CALCULO DA AREA DE UM CIRCULO ATRAVES DO RAIO
	area = 3.14 * pow(raio, 2);
	
	//EXIBINDO A AREA DO CIRCULO
	printf("A Area da circunferencia é: %.2f", area);
	
	return(0);
}