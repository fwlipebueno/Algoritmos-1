#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 11 - Exercício 1.c
@author: Felipe Almeida
@date: 17 Nov 21
@brief: Exercício 1 da aula 11 - vetores

Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma.
*/
int vetor_Um[5];
int vetor_Dois[5];
int somadVetores[5];

int main(){
   printf("Insira cinco números para o primeiro vetor e para o segundo vetor:\n");
   for (int i = 0; i < 5; i++){
       printf("Primeiro vetor: ");
       scanf("%i", &vetor_Um[i]);
       printf("Segundo vetor: ");
       scanf("%i", &vetor_Dois[i]);
       somadVetores[i] = vetor_Um[i] + vetor_Dois[i];
   }//for
   for (int i = 0; i < 5; i++){
       printf("somaVetores[%i]: %i\n", i + 1, somadVetores[i]);
   }//for2

return 0;
}//main
