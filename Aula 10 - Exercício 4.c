#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>/*
@file: Aula 10 - Exercício 4.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 4 da aula 10 - for

Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/
int main(){
  int i;
  for(i = 240; i <= 730; i++){
    if(i % 2 == 0){
      printf("Numero Par: %d\n", i);
    }//if
  }//for

return EXIT_SUCCESS;
}//main
