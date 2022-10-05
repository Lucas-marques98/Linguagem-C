#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float financiamento(float valorfinanciado, float taxa, int periodo)
{
    float prestacaoMes = (valorfinanciado) * pow ((1 + (taxa / 100)),periodo);
    return prestacaoMes;
}
void main()
{
float prestacaoMes, valorfinanciado, taxa, tx;
int periodo;
printf("Entre com o Valor Financiado em R$:\n");
scanf("%f",&valorfinanciado);
printf("Entre com a taxa de juros:\n");
scanf("%f",&taxa);
printf("Entre com o periodo em meses:\n");
scanf("%d",&periodo);
tx = taxa/100;
prestacaoMes = financiamento(valorfinanciado, taxa, periodo);
printf("A prestacao mensal será de R$ %.2f: \n", prestacaoMes);
printf("O valor a ser pago é de R$ %.2f: \n", prestacaoMes/periodo);
printf("Meses %d", periodo);
getch();
}