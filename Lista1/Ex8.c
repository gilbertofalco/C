//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//o produto do dobro do primeiro com metade do segundo .
//a soma do triplo do primeiro com o terceiro.
//o terceiro elevado ao cubo.

#include <stdio.h>

int main(){

    int n1 = 0, n2 = 0;
    float n3 = 0.0;
    float a = 0.0, b = 0.0, c = 0.0;

    scanf("%d\n %d\n %f", &n1, &n2, &n3);


        a = ((float)n1 *2.0) * (float)n2 /2.0;
        b = ((float)n1*3) + n3;
        c = n3*n3*n3;
        printf("%.2f, %.2f, %.2f\n", a, b, c);

    return 0;
}