#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    //DEFINIÃ‡ÃƒO DE VARIAVEIS
    float a, p ;
    
    //BIBLIOTECA PARA PORTUGUÊS
    setlocale(LC_ALL,"Portuguese");
    
    //RECEBER A ALTURA DO ÚSUARIO.
    printf("Digite Sua Altura:\n ");
    scanf("%f", &a);
    
    //RECEBER O PESO DO ÚSUARIO
    printf("Digite Seu Peso:\n ");
    scanf("%f", &p);
    
    //CALCULAR O IMC DO ÚSUARIO P/(A*A)
    printf("O IMC É: %.2f", p/ pow(a,2));
    
    return(0);
    }

