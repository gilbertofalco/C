// João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento 
// diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
//  regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por
//   quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes)
//    e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na
//     variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as
//      mensagens adequadas. 

#include <stdio.h>

#define taxa 4;

int main(){

    float peso = 0,
        excesso = 0,
        multa = 0;
        
        printf("Digite o peso total da sua pesca: \n");
        scanf("%f", &peso);

        if(peso > 50){
            excesso = peso - 50;
            multa = excesso * taxa;
            printf("Você excedeu o máximo permitido: \n");
            printf("Total.....:   %15.2f\n", peso);
            printf("Excesso...:   %15.2f\n", excesso);
            printf("Multa.....: R$%15.2f\n", multa);
        } else{
            printf("Você não excedeu o peso\n");
        }

    return 0;
}