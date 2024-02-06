#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 14 - Exercício 1.c
@author: Felipe Almeida
@date: 30 Nov 21
@brief: Exercício 1 da aula 14

Faça um algoritmo que implemente uma função que receba 3 números
inteiros e retorne o maior valor
*/
int Numero_Maior(int *numero){
   int numero_Maior = 0;
   for (int n = 0; n < 3; n++){
       if (numero[n] > numero_Maior){
           numero_Maior = numero[n];
       }//if
   }//for
   return numero_Maior;
}//int
int main(){
   int numero[3];
   int retornoNumero_Maior;
   printf("Digite 3 numeros:\n");
   for (int i = 0; i < 3; i++){
       scanf("%i", &numero[i]);
   }//for
   retornoNumero_Maior = Numero_Maior(numero);
   printf("Maior número inserido: %i\n", retornoNumero_Maior);

return 0;
}//main
