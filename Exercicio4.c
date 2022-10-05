#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 10

void preenche(float *vetor)
{
int i;
  printf("\nPreenchendo um vetor com %d reais:\n",TAM);
  for(i = 0; i < TAM; i++)
        scanf("%f", &vetor[i]);
}

void mostra(float *vetor)
{
int i;
  printf("\nVetor:\n ");
  for(i = 0; i < TAM; i++)
      printf("%f\t", vetor[i]);
}

void maior(float *vetor) 
{
    int i;
    float maior;

    for(i = 0; i < TAM; i++)
    if(vetor[i] > maior) {
        maior = vetor[i];
    }


   printf("\nO maior número é: %f", maior);
}

void menor(float *vetor) 
{
    int i;
    float menor;

    for(i = 0; i < TAM; i++)
    if(vetor[i] < menor) {
        menor = vetor[i];
    }


   printf("\nO menor número é: %f", menor);
}

void media(float *vetor) 
{
    int i;
    float media;

    for(i = 0; i < TAM; i++)
    media = media + vetor[i] / TAM;


   printf("\nA média é: %f", media);
}

void desvio(float *vetor) 
{

    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += vetor[i];
    }

    float media = soma / (float) TAM;

    float variacoes = 0;
    for (int i = 0; i < TAM; i++) {
        float v = vetor[i] - media;
        variacoes += v * v;
    }

    float sigma = sqrt(variacoes / TAM);
    printf("\nO Resultado è = %.2f\n", sigma);
}

void busca(float *vetor) 
{
    int i, n;
    printf("Qual valor deseja buscar?");
    scanf("%d", &n);
    
    for(i = 0; i < TAM; i++) {
        if(vetor[i] == n) 
        printf("%d ocorre na posição %d do vetor. \n", n, i);
    }
    
}


main()
{
  float vetor[TAM];

  preenche(vetor);
  mostra(vetor);

  maior(vetor);
  menor(vetor);
  media(vetor);
  desvio(vetor);
  busca(vetor);

  getch();
}