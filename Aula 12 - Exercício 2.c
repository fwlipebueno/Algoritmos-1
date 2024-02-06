#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 12 - Exercício 2.c
@author: Felipe Almeida
@date: 22 Nov 21
@brief: Exercício 2 da aula 12 - matrizes

Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária.
*/
int MatrizDiagonal[3][3];
int Diagonal1 = 0, Diagonal2 = 0, SomaDdiagonais = 0;
int i, j;

int main(){
  for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
          printf("Insira os valores da matriz: linha %i coluna %i\n", i + 1, j + 1);
          scanf("%i", &MatrizDiagonal[i][j]);
      }//for2
  }//for
  for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
          printf("%i ", MatrizDiagonal[i][j]);
          if(i == j){
              Diagonal1 = MatrizDiagonal[i][j] + Diagonal1;
          }//if
          if (i + j == 2){
              Diagonal2 = MatrizDiagonal[i][j] + Diagonal2;
          }//if2
      }//for4
      printf("\n");
  }//for3
  SomaDdiagonais = Diagonal1 + Diagonal2;
  printf("Soma da diagonal principal: %i\n", Diagonal1);
  printf("Soma da diagonal secundaria: %i\n", Diagonal2);
  printf("Soma das diagonais: %i\n", SomaDdiagonais);

return 0;
}//main
