#include <stdio.h>
#include <math.h>

int main(){
    //DEFINIÇÃO DE VARIAVEIS
    float a, p ;
    
    //RECEBER A ALTURA DO ÚSUARIO.
    printf("Digite Sua Altura: ");
    scanf("%f", &a);
    
    //RECEBER O PESO DO ÚSUARIO
    printf("Digite Seu Peso: ");
    scanf("%f", &p);
    
    //CALCULAR O IMC DO USUARIO P/(A*A)
    printf("O IMC é: %.2f", p/ pow(a,2));
    
    return(0);
    }

