#include <stdio.h>
#include <stdlib.h>/*
file: Aula de entrada de dados (scanf).c
@author: Felipe Almeida
@date: 10 Inf 2049
@brief: learning
*/

int main(){
  int idade;

  printf("Endereço de memória: %p\n", &idade);
  printf("Valor armazenado: %i\n", idade);
  printf ("Digite sua idade:");
  scanf ("%i", &idade);
  printf ("Você possui %i anos\n", idade);
  printf("Endereço de memória: %p\n", &idade);
  printf("Novo valor armazenado: %i\n", idade);


  return 0;
}//main
