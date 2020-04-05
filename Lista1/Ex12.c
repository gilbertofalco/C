//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da
//área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados 
//e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades
//de latas de tinta a serem compradas e o preço total. 

#include <stdio.h>
#include <math.h>

#define lata 18.0;
#define preco 80.0;
int arredonda(double latas);

int main(){

    double   area = 0,
            valor = 0,
            litro = 0;
    int     latas = 0;
    

    printf("Digite a área a ser pintada: \n");
    scanf("%lf", &area);
    
    litro = area/3.0;

    double aux = litro/lata;    
    latas = arredonda(aux);
    
    valor = latas * preco;
    printf("\n\nQtde de latas de tintas: %d\nValor a ser pago: R$%.2lf\n\n", latas, valor);

}

//Função retorna um inteiro arredondando o valor pra cima.
int arredonda(double latas){
        double diferenca = latas - (int)latas;
        printf("%lf", diferenca);
        if(diferenca > 0) return latas + 1;
    return latas;
}