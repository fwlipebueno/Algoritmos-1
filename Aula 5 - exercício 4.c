#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 5 - exercício 4.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 4 da aula 5

Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.
*/

float numero1, numero2, numero3, numero4, media;

int main(){
  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);
  printf("Digite o primeiro numero: ");
  scanf("%f", &numero2);
  printf("Digite o primeiro numero: ");
  scanf("%f", &numero3);
  printf("Digite o primeiro numero: ");
  scanf("%f", &numero4);
  media = (numero1 + numero2 + numero3 + numero4) / 4;
  printf("A média aritmética dos números inseridos são: %2.f\n", media);

  return 0;
  }//main
