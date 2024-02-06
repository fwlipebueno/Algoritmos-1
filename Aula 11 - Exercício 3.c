#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 11 - Exercício 3.c
@author: Felipe Almeida
@date: 17 Nov 21
@brief: Exercício 3 da aula 11 - vetores

Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.
*/
int vetor1[10];
int idadeSuperior = 0;

int main(){
   printf("Insira a idade de cada membro do grupo:\n---> Obs: quantidade máxima de 10 pessoas.\n");
   for (int i = 0; i < 10; i++){
       scanf("%i", &vetor1[i]);
       if (vetor1[i] > 35){
           idadeSuperior++;
       }//if
   }//for
   printf("A quantidade de indivíduos do grupo que possuem mais de 35 anos é de: %i", idadeSuperior);

return 0;
}//main
