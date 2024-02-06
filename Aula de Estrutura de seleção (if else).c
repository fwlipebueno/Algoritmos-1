#include <stdio.h>
#include <stdlib.h>/*
file: Aula de entrada de dados (scanf).c
@author: Felipe Almeida
@date: 10 Inf 2049
@brief: learning
*/
int main(){
  int idade;
  printf ("Digite sua idade:");
  scanf("%i",&idade);
  if(idade >=18 && idade <80){
   printf("Já pode ir preso\n");
  }else{
   printf("Não pode ser preso, mas pode ir para o reformatório, ou para cova :)\n");
  }//else

  return 0;
}//main
