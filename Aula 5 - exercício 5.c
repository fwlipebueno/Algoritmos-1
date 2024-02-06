#include <stdio.h>
#include <locale.h>
#include <math.h>/*
@file: Aula 5 - exercício 5.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 5 da aula 5

Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.
*/
void main (void) {
  setlocale(LC_ALL, "ptb");
  system("title RAIZ QUADRADA");
  system("color a0");
int raiz;

  printf("Digite um valor, por obs�quio: ");
  scanf("%d", &raiz);

  printf("A raiz quadrada do número explicitado %d � %.2f\n", raiz, sqrt (raiz));
}//main
