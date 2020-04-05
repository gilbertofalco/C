//Faça um Programa que peça a temperatura em graus Farenheit,
//transforme e mostre a temperatura em graus Celsius.

//   C = (5 * (F-32) / 9). 

#include <stdio.h>

float celcius(float fah);

int main(){

    float graus = 0.0;

    printf("Graus em Fahrenheit: \n");
    scanf("%f", &graus);
    printf("Graus em Celcius: %.2f\n", celcius(graus));

}

float celcius(float fah){
    return (5 * (fah-32) / 9);
}

