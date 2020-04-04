//Faça um Programa que converta metros para centímetros. 

#include <stdio.h>

int main(){

    float medida = 0.0;
    printf("Digite o valor em metros: \n");
    scanf("%f", &medida);
    printf("O valor digitado em cm: %.2fcm\n", medida*100);

    return 0;
}