#include <stdio.h>
#include <stdlib.h>/*
@file: Aula de estrutura de repetição (while).c
@author: Felipe Almeida
@date: 19 Out 2021
@brief: learning
*/

int main(){
  int contador = 0;
  while(contador <= 1000000){
    printf("%i\n", contador);
    contador++;
  }//while

return 0;
}//main
int main(){
  int contador = 0;
  int soma = 0;

  while(contador <= 10000){
    soma = soma + contador;
    contador++;
  }//while
  printf("A soma é %i\n");
return 0;
}//main
