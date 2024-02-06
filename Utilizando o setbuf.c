#include <stdio.h>
#include <stdlib.h>/*
file: Aula de entrada de dados (scanf).c
@author: Felipe Almeida
@date: 10 Inf 2049
@brief: learning
*/

int main(){
  char letra;
  int numero1;
  int numero2;
  printf("Digite o numero1:");
  scanf("%i",&numero1);
  setbuf(stdin,NULL);
  printf("Digite uma letra:");
  scanf("%c",&letra);
  printf("Digite o numero2:");
  scanf("%i",&numero2);
  return 0;
  }//main
