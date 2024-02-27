#include <stdio.h>
#include <locale.h>


int main(){
	
	//DEFININDO AS VARIAVEIS
	float n1, n2, n3, af, mp, mf ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO A PRIMEIRA NOTA 
	printf("Digite Sua Primeira Nota:");
	scanf("%f", &n1);
	
	//SOLICITANDO A SEGUNDA NOTA 
	printf("\nDigite Sua Segunda Nota:");
	scanf("%f", &n2);
	
	//SOLICITANDO A TERCEIRA NOTA 
	printf("\nDigite Sua Terceira Nota:");
	scanf("%f", &n3);
	
	//CALCULANDO A MEDIA DAS 3 PRIMEIRAS AVALIACOES
	mp = (n1 + n2 + n2)/3 ;
	
	//VERIFICANDO SE O ALUNO OBTEVE MEDIA MAIOR QUE 7.0
	if(mp >= 7){
		printf("Aluno Aprovado!");
	}
	
	//VERIFICANDO SE O ALUNO OBTEVE NOTA MAIOR QUE 3.5 E MAIOR QUE 7.0
	//CASO OBTENHA, IRA FAZER UMA QUARTA AVALIAÇÃO
	else if((mp >= 3.5)&&(mp < 7)){
		printf("O aluno irá fazer uma quarta avaliação!\n");
		
		//SOLICITANDO A QUARTA NOTA
		printf("Digite a Nota da Quarta avaliação:");
		scanf("%f", &af);
		
		//CALCULO DA MEDIA FINAL
		mf = (((6 * mp)+(4 * af))/10);
		
		//EXIBINDO A NOTA DO ALUNO
		printf("\nO aluno obteve a nota %2.f", mf);
	}
	else{
		
		//CASO O ALUNO TENHA TIRADO NOTA ABAIXO DE 3.5!
		printf("O aluno foi reprovado!");
	}
	return 0;
}