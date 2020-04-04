//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
//Extra: Faça uma função que diga se o aluno foi aprovado ou não

#include <stdio.h>
#include <stdbool.h>

bool aprovado(double media);

int main(){

    double n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0;

    printf("Digite a Nota 1: \n");
    scanf("%lf", &n1);
    printf("Digite a Nota 2: \n");
    scanf("%lf", &n2);
    printf("Digite a Nota 3: \n");
    scanf("%lf", &n3);
    printf("Digite a Nota 4: \n");
    scanf("%lf", &n4);

    double media = (n1+n2+n3+n4)/4.0;

    
    printf("A média é: %.2lf\n\n", media);
    if(aprovado(media)){
        printf("Aluno aprovado!\n");   
    } else
        printf("Aluno reprovado!\n");


    return 0;

}

bool aprovado(double media){
    return media >= 6.0;
};