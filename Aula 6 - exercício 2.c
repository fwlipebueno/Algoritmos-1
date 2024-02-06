#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 6 - exercício 2.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 2 da aula 6

Faça um programa que receba um número e determine
se ele é um número par ou ímpar.
 Obs.: Utilize o operador % que retorna o resto da divisão)
*/

int numero;

int main(){
  printf("Digite um algarismo: ");
  scanf("%i", &numero);

  if(numero % 2 == 0){
    printf("Número par.\n");
    }else{
    printf("Número ímpar.\n");
    }//else
return 0;
}//main
