// /Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

//     Para homens: (72.7*h) - 58
//     Para mulheres: (62.1*h) - 44.7

#include <stdio.h>
int calcula(char sexo, int alt);


int main(){

    char sexo = 'm';
    float alt = 0.0;
    
    printf("Digite sua altura em metros: \n");
    
    scanf("%f", &alt);
    fflush(stdin);
    printf("Digite M para mulher e H para homem: \n");
    
    scanf("%c", &sexo);
    fflush(stdin);
    sexo = getchar();
    
    printf("%d\n", calcula(sexo, alt));
    getchar();
    return 0;

}

int calcula(char sexo, int alt){
switch(sexo)
    {
    case 'M':
        return (62.1*alt)-44.7;
    case 'm':
        return (62.1*alt)-44.7;
        
    case 'H':
        return (72.7*alt) - 58;
    case 'h' :
         return (72.7*alt) - 58;
        
    default:
        return -1;
    }

    return -2;
}