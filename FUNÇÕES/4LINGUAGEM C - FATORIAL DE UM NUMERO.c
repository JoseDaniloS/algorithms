#include <stdio.h>
#include <locale.h>

//PROTÓTIPO DA FUNÇÃO
int fatorial(int valor);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int x, y;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//VERIFICA SE O NUMERO INFORMADO É POSITIVO, CASO NÃO SEJA ELE ENCERRA O ALGORITMO
	if(x > 0){
		
		//CHAMADA DA FUNÇÃO "fatorial" RECEBE NA VARIAVEL "y"
		y = fatorial(x);
		
		//EXIBINDO O FATORIAL DE "x"
		printf("%i! = %i", x, y);
	}
	else{
		
		printf("Digite um número positivo");
			
	}
	return 0;
}

//FUNÇÃO PARA CALCULAR O FATORIAL DO VALOR INFORMADO PELO USUARIO
int fatorial(int valor){
	
	//DEFINIÇÃO DE VARIAVEIS
	int cont, fatorial = 1;
	
		//CALCULAR O FATORIAL DO NUMERO
		for(cont = valor; cont >=1; cont--){
			
			fatorial = cont * fatorial ;
		}
		return(fatorial);
}