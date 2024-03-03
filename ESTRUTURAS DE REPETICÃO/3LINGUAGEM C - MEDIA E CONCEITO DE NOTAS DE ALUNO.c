#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFININDO AS VARIAVEIS
	float media, n1, n2, n3;
	int contador, aluno = 1 ;
	
	//MUDANDO O IDIOMA
	setlocale(LC_ALL,"Portuguese");
	
	//LOOPING DE 1 ATE 10
	for(contador = 1; contador <= 10; contador++){
		
		//EXIBINDO EM QUAL ALUNO ESTÁ
		printf("%iª Aluno\n", aluno);
		
		//SOLICITANDO AS 3 NOTAS DOS ALUNOS
		printf("Digite a Primeira Nota ");
		scanf("%f", &n1);	
		printf("Digite a Segunda Nota ");
		scanf("%f", &n2);	
		printf("Digite a Terceira Nota ");
		scanf("%f", &n3);	  	
		
		//CALCULANDO A MEDIA DOS ALUNOS
		media = (( n1 + n2 + n3 ) / 3);	
		
		//VERIFICANDO QUAL O CONCEITO QUE O ALUNO OBTEVE
		if(media >= 9){
			printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito A\n", media);
		}
		else if((media >= 7)&&(media < 9)){
			printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito B\n", media);
			
		}
		else if((media >= 6)&&(media < 7)){
			printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito C\n", media);
		}
		else if((media >= 4)&&(media <6)){
			printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito D\n", media);
		}
		else{
			printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito E\n", media);
		}
		
		//CONTADOR DE ALUNO
		aluno++;
	}
	return 0;
}