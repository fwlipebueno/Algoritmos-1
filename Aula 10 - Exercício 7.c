#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>/*
@file: Aula 10 - Exercício 7.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 7 da aula 10 - for

Faça um programa que mostre n elementos da sequência de
Fibonacci.
 O valor de n é passado para o programa.
 O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a
fórmula t
n = tn-1 + tn-2
*/
int numero = 0, fibonacci = 0;

int main(){
  printf("Digite um número:\n");
  scanf("%i", &numero);
  for (int t = 0; t <= numero; t++){
     fibonacci = numero - 1 + numero - 2;
  }//for
  printf("Resultado: %i\n", fibonacci);

return 0;
}//main
