#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 12 - Exercício 3.c
@author: Felipe Almeida
@date: 22 Nov 21
@brief: Exercício 3 da aula 12 - matrizes

Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:
 O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.
Exercícios Exercícios
 Multiplicando uma matriz por um escalar
 Uma matriz C é criada com seus elementos gerados a partir da
multiplicação de cada célula da matriz A pelo número escalar
C x,y = A x,y * escalar
*/
int matriz[5][5];
int maiorValor[1][1] = {{0}};
int i, j, k;

int main(){
    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%i ", &matriz[i][j]);
        }//for2
    }//for
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%i ", matriz[i][j]);
        }//for4
        printf("\n");
    }//for3
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            for (k = 0; k < 25; k++){
                if (maiorValor[1][1] < matriz[i][j]){
                    maiorValor[1][1] == matriz[i][j];
                }//for8
            }//for7
        }//for6
    }//for5
    printf("Maior valor da matriz nas posicoes %i-%i: %i\n",i, j, maiorValor[1][1]);

return 0;
}//main
