#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 14 - Exercício 5.c
@author: Felipe Almeida
@date: 30 Nov 21
@brief: Exercício 5 da aula 14

Crie uma função que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse número.
Em todos os exercícios faça uma função main para testar sua função
*/
int Fatorial(int numero){
  int fatorial = 1, i = 1;

  for (i = numero; i != 0; i--){
      fatorial *= i;
  }//for
  return fatorial;
}
int main(){
  int Numero;
  int Retorno_Fatorial;
  printf("Insira um número:\n");
  scanf("%i", &Numero);
  Retorno_Fatorial = Fatorial(Numero);
  printf("Fatorial do número %i: %i", Numero, Retorno_Fatorial);

return 0;
}//main
