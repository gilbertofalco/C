//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área. 

#include <stdio.h>
#define pi 3.14

float area(float raio);
float perimetro(float raio);

int main(){
    float raio = 0.0;

    printf("Digite o Raio(r) do Círculo: \n");
    scanf("%f", &raio);

    printf("Área:     %.2f \nPerímetro:%.2f\n", area(raio), perimetro(raio));
    
    return 0;
}

float area(float raio){
    return pi*(raio*raio);
}

float perimetro(float raio){
    return 2*pi*raio;
}