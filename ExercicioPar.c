#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 10

void preenche(int *vetor)
{
int i;
  printf("\nPreenchendo um vetor com %d inteiros:\n",TAM);
  for(i = 0; i < TAM; i++ )
        scanf("%d",&vetor[i]);
  getchar();
}

void mostra(int *vetor)
{
int i;
  printf("\nVetor:\n ");
  for( i = 0; i < TAM; i++ )
      printf("%d\t",vetor[i]);
  getchar();
}

int contapar(int *vetor)
{
int i, par=0;
for ( i = 0; i < TAM; i++)
{    
    if (vetor[i]%2==0)
        par++;
}
return par;
}

main()
{
  int vetor[TAM];
  int qtdpar;
  preenche(vetor);    
  mostra(vetor);
  qtdpar = contapar(vetor);
  printf("Quantidade de Pares = %d", qtdpar);
  getch();
}