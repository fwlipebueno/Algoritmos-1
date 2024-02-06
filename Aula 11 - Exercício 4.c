#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 11 - Exercício 4.c
@author: Felipe Almeida
@date: 17 Nov 21
@brief: Exercício 4 da aula 11 - vetores

Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado.
*/
int vetor1[8] = {2, 4, 6, 8, 10, 12, 14, 16};
int vetor2[8] = {1, 3, 5, 7, 9, 11, 13, 17};
int somadVetores;

int main(){
   for (int i = 0; i < 8; i++){
       somadVetores = somadVetores + vetor1[i] + vetor2[i];
   }//for
   printf("soma dos vetores = %i\n", somadVetores);

return 0;
}//main
