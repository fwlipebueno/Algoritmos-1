#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 12 - Exercício 6.c
@author: Felipe Almeida
@date: 22 Nov 21
@brief: Exercício 6 da aula 12 - matrizes

Faça um programa que multiplique as matrizes A e D
abaixo gerando matriz AD.
*/
int matrizA[2][3];
int matrizD[3][2];
int matrizAD[2][2] = {{0,0},{0,0}};
int i, j, m;

int main(){
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          printf("Insira os valores da Matriz A: linha %i coluna %i\n", i + 1, j + 1);
          scanf("%i", &matrizA[i][j]);
      }//for2
  }//for
  for (i = 0; i < 3; i++){
      for (j = 0; j < 2; j++){
          printf("Insira os valores da Matriz D: linha %i coluna %i\n", i + 1, j + 1);
          scanf("%i", &matrizD[i][j]);
      }//for4
  }//for3
  printf("Matriz A:\n");
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          printf("%i ", matrizA[i][j]);
      }//for6
      printf("\n");
  }//for5
  printf("Matriz D:\n");
  for (i = 0; i < 3; i++){
      for (j = 0; j < 2; j++){
          printf("%i ", matrizD[i][j]);
      }//for8
      printf("\n");
  }//for7
  for (i = 0; i < 2; i++){
      for (j = 0; j < 2; j++){
          for (m = 0; m < 3; m++){
              matrizAD[i][j] = matrizAD[i][j] + (matrizA[i][m] * matrizD[m][j]);
          }//for11
      }//for10
  }//for9
  for (i = 0; i < 2; i++){
      for (j = 0; j < 2; j++){
         printf("%i ", matrizAD[i][j]);
      }//for13
      printf("\n");
  }//for12

return 0;
}//main
