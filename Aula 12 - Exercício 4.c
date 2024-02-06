#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 12 - Exercício 4.c
@author: Felipe Almeida
@date: 22 Nov 21
@brief: Exercício 4 da aula 12 - matrizes

Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C.
 Somando/Subtraindo duas matrizes
 Para somar/subtrair 2 matrizes A e B, ambas devem ter o mesmo número
de linhas e colunas (mesma ordem). A matriz resultante C tem a mesma
ordem.
 A soma/subtração ocorre entre os elementos correspondentes da célula A
com a célula B ( mesma coordenada)
Cx,y = Ax,y ± Bx,y
*/
int MMultiplicacao[2][3];
int matrizC[2][3];
int i, j;

int main(){
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          printf("Insira os valores da matriz: linha %i coluna %i\n", i + 1, j + 1);
          scanf("%i", &MMultiplicacao[i][j]);
      }//for2
  }//for
  for (i = 0; i < 2; i++){
      for (j = 0; j < 3; j++){
          matrizC[i][j] = MMultiplicacao[i][j] * 5;
          printf("%i ", matrizC[i][j]);
      }//for4
      printf("\n");
  }//for3

return 0;
}//main
