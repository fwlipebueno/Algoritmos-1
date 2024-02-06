#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 12 - Exercício 1.c
@author: Felipe Almeida
@date: 22 Nov 21
@brief: Exercício 1 da aula 12 - matrizes

Crie uma matriz identidade com dimensões 5 x 5.
*/
int matrizID[5][5] = {{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};
int i, j;

int main(){
  for (i = 0; i < 5; i++){
      for (j = 0; j < 5; j++){
          printf("%i", matrizID[i][j]);
      }//for2
      printf("\n");
  }//for

return 0;
}//main
