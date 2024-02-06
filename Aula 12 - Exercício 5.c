#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 12 - Exercício 5.c
@author: Felipe Almeida
@date: 22 Nov 21
@brief: Exercício 5 da aula 12 - matrizes

Faça um programa que some as matrizes A e B, gerando C
 Multiplicação de matrizes
 Condição: o número de colunas da matriz da esquerda é o mesmo número de
linhas da matriz da direita
 Se A é uma matriz m por n e D é uma matriz n por p, então seu produto AD é a
matriz m por p (m linhas e p colunas)
 Fórmula: ADx,y = Ax,0D0,y + Ax,1D1,y + Ax,2D2,y + Ax,3D3,y...
*/
int matrizA[2][3];
int matrizB[2][3];
int matrizC[2][3];
int i, j;

int main(){
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          printf("Insira os valores da Matriz A: linha %i coluna %i\n", i + 1, j + 1);
          scanf("%i", &matrizA[i][j]);
      }//for2
  }//for
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          printf("Insira os valores da Matriz B: linha %i coluna %i\n", i + 1, j + 1);
          scanf("%i", &matrizB[i][j]);
      }//for4
  }//for3
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
      }//for6
  }//for5
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          printf("%5i ", matrizC[i][j]);
      }//for8
      printf("\n");
  }//for7

return 0;
}//main
