#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>/*
@file: Aula 10 - Exercício 2.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 2 da aula 10 - for

Faça um algoritmo que exiba todos números de 100 a 1.
*/
int main(){
  int i;
  for(i = 100; i > 0; i--){
    printf("Numero %d\n", i);
  }//for

return EXIT_SUCCESS;
}//main
