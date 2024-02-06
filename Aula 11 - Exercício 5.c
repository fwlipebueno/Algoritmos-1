#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 11 - Exercício 5.c
@author: Felipe Almeida
@date: 17 Nov 21
@brief: Exercício 5 da aula 11 - vetores

Dado dois vetores, A (4 elementos) e B (5 elementos), faça
um programa em C que imprima todos os elementos comuns
aos dois vetores.
*/
int vetorA[4];
int vetorB[5];

int main(){
   printf("Insira quatro elementos para o vetor A e cinco para o vetor B: \n");
   for (int i = 0; i < 4; i++){
       printf("Vetor A: ");
       scanf("%i", &vetorA[i]);
   }//for
   for (int z = 0; z < 5; z++){
       printf("Vetor B: ");
       scanf("%i", &vetorB[z]);
   }//for2
   for (int y = 0; y < 5; y++){
       for (int a = 0; a < 5; a++){
           if (vetorA[y] == vetorB[a]){
               printf("Valores iguais entre vetor A e o vetor B %i\n", vetorB[y]);
           }//if
       }//for4
   }//for3

return 0;
}//main
