//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
//Calcule e mostre o total do seu salário no referido mês. 

#include <stdio.h>

float salarioFinal(float valor, float horas);

int main(){

    float valor = 0.0, horas = 0.0;

    printf("Digite o valor que ganha por hora: \n");
    scanf("%f", &valor);

    printf("Digite as horas: \n");
    scanf("%f", &horas);
 
    printf("O Salario final é: %.2f\n", salarioFinal(valor, horas));

    getchar();
    return 0;
}

float salarioFinal(float valor, float horas){
    return valor*horas;
}