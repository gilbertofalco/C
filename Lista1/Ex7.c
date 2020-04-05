//Faça um Programa que peça a temperatura em graus Celsius,
//transforme e mostre em graus Farenheit. 


#include <stdio.h>

float fah(float fah);

int main(){

    float graus = 0.0;

    printf("Graus em Celcius: \n");
    scanf("%f", &graus);
    printf("Graus em Fahrenheit: %.2f\n", fah(graus));

}

float fah(float graus){
    return 32+(graus*9/5);
}

