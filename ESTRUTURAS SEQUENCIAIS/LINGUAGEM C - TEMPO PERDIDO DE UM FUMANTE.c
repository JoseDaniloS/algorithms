#include <stdio.h>
#include <locale.h>

int main(){

	//DEFINIÇÃO DE VARIAVEIS
	int QuantCig, QuantDia, CigFum, TP, DP, Ano ;
	
	//MUDANDO IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");	
	
	//SOLICITANDO A QUANTIDADE DE CIGARROS FUMADOS EM UM DIA
	printf("Quantos cigarros você fuma por dia?");
	scanf("%i", &QuantCig);
	
	//SOLICITANDO A QUANTIDADE DE ANOS QUE O USUARIO FUMA
	printf("A Quantos anos você fuma?");
	scanf("%i", &Ano);
	
	//CONVERTENDO ANOS EM DIAS
	QuantDia = Ano * 365;
	
	//CALCULANDO A QUANTIDADE DE CIGARROS FUMADOS DE ACORDO COM O TEMPO FUMADO
	CigFum = QuantCig * QuantDia ;
	
	//CALCULANDO OS MINUTOS PERDIDOS A CADA CIGARRO
	TP = CigFum * 10 ;
	
	//CONVERTENDO OS MINUTOS PERDIDOS EM DIAS
	DP = ((TP / 60) / 24);
	
	//EXIBINDO OS DIAS PERDIDOS DE VIDA
	printf("Você perdeu %i dias de vida", DP);
	
	return(0);
}