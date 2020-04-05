// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
//Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para 
//o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:

//     salário bruto.
//     quanto pagou ao INSS.
//     quanto pagou ao sindicato.
//     o salário líquido.
//     calcule os descontos e o salário líquido, conforme a tabela abaixo:

//     + Salário Bruto : R$
//     - IR (11%) : R$
//     - INSS (8%) : R$
//     - Sindicato ( 5%) : R$
//     = Salário Liquido : R$

//     Obs.: Salário Bruto - Descontos = Salário Líquido. 



#include <stdio.h>

int main(){

    float   valorHora = 0,
            horas = 0,
            salarioTotal = 0,
            ir = 0,
            inss = 0,
            sindicato = 0,
            salarioLiq = 0;

    printf("Digite o valor que ganha por hora: \n");
    scanf("%f", &valorHora);
    printf("Digite quantas horas trabalha por mês: \n");
    scanf("%f", &horas);

    salarioTotal = valorHora * horas;
    ir = salarioTotal * 0.11;
    inss = salarioTotal * 0.8;
    sindicato = salarioTotal * 0.05;
    salarioLiq = salarioTotal - (ir + inss + sindicato);

    printf("\n\n\n");
    printf("+ Salário Bruto .......: R$%10.2f\n", salarioTotal);
    printf("- IR (11%%) ............: R$%10.2f\n", ir);
    printf("- INSS (8%%) ...........: R$%10.2f\n", inss);
    printf("- Sindicato (5%%) ......: R$%10.2f\n", sindicato);
    printf("= Salário Liquido .....: R$%10.2f\n\n\n", salarioLiq);

    return 0;
}