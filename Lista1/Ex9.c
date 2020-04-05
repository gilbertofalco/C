// /Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

//     Para homens: (72.7*h) - 58
//     Para mulheres: (62.1*h) - 44.7

#include <stdio.h>



int main(){

    char sexo;
    float alt = 0.0;

    printf("Digite sua altura em metros: ");
    scanf("%f", &alt);
    fflush(stdin);
    printf("Digite M para mulher e H para homem: \n");
    scanf("%c", &sexo);
    fflush(stdin);
    
    switch (sexo)
    {
    case 'M':
        printf("Peso ideal: %f", (62.1*alt)-44.7);
        return 0;
    case 'm':
        printf("Peso ideal: %f", (62.1*alt)-44.7);
        return 0;
    case 'h' || 'H' :
        printf("Peso ideal: %f", (72.7*alt) - 58);
        return 0;
    default:
        break;
    }


    getchar();
    return 0;

}