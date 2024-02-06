/*
@file: calculadora.c
@author: Alexandre Aparecido
@date: 06 Out 21
@brief: Exercício 3 da aula 4

Faça um programa com 2 variáveis, A e B, onde A terá o
valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B, AxB e A/B.
Em seguida, faça B incrementar de uma unidade e repita as 4 operações./

#include <stdio.h>
#include <stdlib.h>

int a = 40;
int b = -1;
int soma, subtracao;
float multi, divisao;

int main() {
/  soma = a + b;
  subtracao = a - b;
  multi = a * b;
  divisao = a / b; */

  for (int i = 1; i <= 4; i++) {
    soma = (a + b);
    subtracao = (a - b);
    multi = (a * (float)b);
    divisao = (a /(float)b);
    b++;
    printf("Parte %i : \nSoma: %i\nSubtração: %i\n", i, soma, subtracao);
    printf("Multiplicação: %.2f\nDivisão: %f\n\n", multi, divisao);
  }
  return 0;
}
