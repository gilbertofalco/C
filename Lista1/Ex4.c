//Faça um Programa que calcule a área de um quadrado,
//em seguida mostre o dobro desta área para o usuário. 

#include <stdio.h>
#include <math.h>

int main(){
    int lado = 0;
    
    printf("Digite o valor do lado do quadrado: \n");
    scanf("%d", &lado);
    printf("A área do quadrado é: %d\n", lado*lado);
    printf("O dobro da área é: %d\n", lado*lado*2); 

    return 0;
}
