#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 11 - Exercício 6.c
@author: Felipe Almeida
@date: 17 Nov 21
@brief: Exercício 6 da aula 11 - vetores

Faça um programa que receba e armazene 20 números em
um vetor. Em seguida exiba:
 Quantos números são iguais a 30;
 Quantos números são maior que a média;
 Quantos números são iguais à media;
*/
int vetorPrincipal[20];
int somadVetor = 0, mediadVetor = 0, igualTrinta = 0, igualMedia = 0, maiorMedia = 0;

int main(){
   printf("Insira 20 números, por obséquio: \n");
   for (int i = 0; i < 20; i++){
       scanf("%i", &vetorPrincipal[i]);
       somadVetor = somadVetor + vetorPrincipal[i];
       mediadVetor = somadVetor / 20;
   }//for
   for (int i = 0; i < 20; i++){
       if (vetorPrincipal[i] == 30){
           igualTrinta++;
       }//if
       if (vetorPrincipal[i] == mediadVetor){
           igualMedia++;
       }//if2
       if (vetorPrincipal[i] > mediadVetor){
           maiorMedia++;
       }//if3
   }//for2
   printf("Números iguais a 30 = %i\n", igualTrinta);
   printf("Números maiores que a média = %i\n", maiorMedia);
   printf("Números iguais a média = %i\n", igualMedia);

return 0;
}//main
