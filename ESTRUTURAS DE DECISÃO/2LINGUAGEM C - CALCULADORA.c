#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int operacao ;
	float x, y, z ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//EXIBINDO AS OPERAÇÕES DISPONIVEIS
	printf("CALCULADORA - EM - C: \n");
	printf(" 1 - ADIÇÃO \n");
	printf(" 2 - SUBTRAÇÃO \n");
	printf(" 3 - MULTIPLICAÇÃO \n");
	printf(" 4 - DIVISÃO  \n");
	
	//SOLICITANDO AO USUARIO UMA DAS OPÇÕES ACIMA
	printf("SELECIONE QUAL OPERAÇÃO DEJESA REALIZAR:");
	scanf("%i", &operacao);
	switch(operacao)
	{
		
	//OPERAÇÃO DE ADIÇÃO
	case 1:
		printf("\nVocê selecionou Adição!\n");
		printf("Digite O Primeiro Número: \n");
		scanf("%f", &x);
		printf("Digite O Segundo Número: \n");
		scanf("%f", &y);
		z = x + y ;
		printf("%.1f + %.1f = %.1f", x, y, z);
		break;
	
	//OPERAÇÃO DE SUBTRAÇÃO
	case 2:
		printf("\nVocê selecionou Subtração!\n");
		printf("Digite O Primeiro Número: \n");
		scanf("%f", &x);
		printf("Digite O Segundo Número: \n");
		scanf("%f", &y);
		z = x - y ;
		printf("%.1f - %.1f = %.1f", x, y, z);
		break;
	
	//OPERAÇÃO DE MULTIPLICAÇÃO
	case 3:
		printf("\nVocê selecionou Multiplicação!\n");
		printf("Digite O Primeiro Número: \n");
		scanf("%f", &x);
		printf("Digite O Segundo Número: \n");
		scanf("%f", &y);
		z = x * y ;
		printf("%.1f x %.1f = %.1f", x, y, z);
		break;
	
	//OPERAÇÃO DE DIVISÃO
	case 4:
		printf("\nVocê selecionou Divisão!\n");
		printf("Digite O Primeiro Número: \n");
		scanf("%f", &x);
		printf("Digite O Segundo Número: \n");
		scanf("%f", &y);
		if(y == 0){
			printf("Denominador Invalido!");
		}
		else
		{
		z = x / y ;
		printf("%.1f / %.1f = %.2f", x, y, z);	
		}
		break;
	
	//CASO O NÚMERO QUE O USUARIO DIGITAR SEJA INVALIDO
	default:
		printf("Opção Invalido!");
		break;
	}
	return 0;
}