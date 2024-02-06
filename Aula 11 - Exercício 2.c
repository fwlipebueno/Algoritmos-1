#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 11 - Exercício 2.c
@author: Felipe Almeida
@date: 17 Nov 21
@brief: Exercício 2 da aula 11 - vetores

Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A.
*/
int vetor1[10], vetor2[10];

int main(){
   printf("Insira 10 números\n");
   for(int i = 0; i < 10; i++){
       scanf("%i", &vetor1[i]);
   }//for
   printf("Quadrado dos números evidenciados: \n");
   for (int i = 0; i < 10; i++){
       vetor2[i] = vetor1[i] * vetor1[i];
       printf("vetor2[%i]: %i\n", i + 1, vetor2[i]);
   }//for2

return 0;
}//main
