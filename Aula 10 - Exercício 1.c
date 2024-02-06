#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>/*
@file: Aula 10 - Exercício 1.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 1 da aula 10 - for

Faça um algoritmo que exiba todos números de 1 a 100.
*/
int main(){
  int i;
  for(i = 1; i <= 100; i++){
    printf("Número %d\n", i);
  }//for

return EXIT_SUCCESS;
}//main
