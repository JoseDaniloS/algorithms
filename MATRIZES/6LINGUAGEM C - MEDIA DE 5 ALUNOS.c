#include <stdio.h>
#include <locale.h>

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E MATRIZES
	char nome[5][50];
	int nota[5][3];
	int i, j;
	float media = 0;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O NOME E AS 3 NOTAS DE 5 ALUNOS
	for(i = 0; i < 5; i++){
		printf("\nDigite o Nome do Aluno: ");
		scanf("%s", &nome[i]);
		for(j = 0; j < 3; j++){
			printf("Digite a %iº Nota do Aluno: ", j + 1);
			scanf("%i", &nota[i][j]);
		}
	}
	
	//EXIBINDO O NOME E A MEDIA DOS 5 ALUNOS
	for(i = 0; i < 5; i++){
		printf("%iº Aluno: %s\n",i + 1, nome[i]);
		media = 0;
		for(j = 0; j < 3; j++){
			media = nota[i][j] + media;
		}
		media = (media / 3);
		printf("Média: %.1f\n\n", media);
	}
	
	return 0;
}