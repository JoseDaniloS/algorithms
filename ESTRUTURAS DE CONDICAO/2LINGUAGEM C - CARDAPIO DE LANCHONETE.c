#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int codigo ;
	float item ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//EXIBINDO O CARDAPIO PARA O USUARIO
	printf("------------ CARDAPIO DE UM RESTAURANTE------------\n");
	printf(" CODIGO DO ITEM // ESPECIFICAÇÃO // PREÇO UNITARIO \n");
	printf("        100       Cachorro Quente         08,00    \n");
	printf("        101            Bauru              09,00    \n");
	printf("        102          X - Salada           10,00    \n");
	printf("        103          Hambúrguer           12,00    \n");
	printf("        104        Refrigerante(lata)     3,00     \n");
	
	//SOLICITANDO O CODIGO PARA O USUARIO
	printf("Digite o codigo do item que você deseja comprar:");
	scanf("%i", &codigo);
	switch(codigo)
	{
		
		//CASO O USUARIO SELECIONE CACHORRO QUENTE
	case 100:
		printf("Você selecionou Cachorro Quente!\n");
		printf("Digite a quantidade de itens que você ira comprar");
		scanf("%f", &item);
		printf("Você ira pagar %.2f", item * 08.00);
		break;
	case 101:
		
		//CASO O USUARIO SLEECIONE BAURU
		printf("Você selecionou Bauru!\n");
		printf("Digite a quantidade de itens que você ira comprar");
		scanf("%f", &item);
		printf("Você ira pagar %.2f", item * 09.00);
		break;
	case 102:
		
		//CASO O USUARIO SELECIONE X SALADA
		printf("Você selecionou X - Salada!\n");
		printf("Digite a quantidade de itens que você ira comprar");
		scanf("%f", &item);
		printf("Você ira pagar %.2f", item * 10.00);
		break;
	case 103:
		
		//CASO O USUARIO SELECIONE HAMBURGUER
		printf("Você selecionou Hambúrguer!\n");
		printf("Digite a quantidade de itens que você ira comprar");
		scanf("%f", &item);
		printf("Você ira pagar %.2f", item * 12.00);
		break;
	case 104:
		
		//CASO O USUARIO SELECIONE REFRIGERANTE
		printf("Você selecionou Refrigerante(lata)!\n");
		printf("Digite a quantidade de itens que você ira comprar");
		scanf("%f", &item);
		printf("Você ira pagar %.2f", item * 03.00);
		break;
	
		//CASO O USUARIO SELECIONE UM NUMERO INVALIDO
	default:
		printf("Você Digitou uma opção invalida!");
		break;
	}
	
	return 0;
}