#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>/*
@file: Aula 10 - Exercício 3.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 3 da aula 10 - for

Crie um algoritmo que exiba todos os números múltiplos
de 5 no intervalo de 1 a 500.
*/
int main(){
  int i;
  for(i = 1; i <= 500; i++){
    if(i % 5 == 0){
      printf("Multiplo de 5: %d\n", i);
    }//if
  }//for

return EXIT_SUCCESS;
}//main
