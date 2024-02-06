#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>/*
@file: Aula 10 - Exercício 5.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 5 da aula 10 - for

Faça um programa que calcule o fatorial de um número a ser
digitado.
*/
int main(){
  int i,  numero, fatorial = 1;
  printf("Digite um número: ");
  scanf("%d", &numero);
  for(i = 1; i <= numero; i++){
    fatorial = fatorial * i;
  }//for
  printf("O fatorial do número digitado é: %d\n", fatorial);

return EXIT_SUCCESS;
}//main
