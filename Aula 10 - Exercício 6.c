#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>/*
@file: Aula 10 - Exercício 6.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 6 da aula 10 - for

Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez).
*/
int main(){
  int i = 1, numero, quadrado;
  for(i = 1; i <= 10; i++){
    printf("Digite um número: ");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("O quadrado e %d e: %d\n", numero, quadrado);
  }//for

return 0;
}//main
