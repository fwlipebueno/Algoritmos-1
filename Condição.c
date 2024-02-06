#include <stdio.h>
#include <stdlib.h>/*
@file: Aula de entrada de dados (scanf).c
@author: Felipe Almeida
@date: 10 Inf 2049
@brief: learning
*/
int main(){
  int idade;
  printf ("Digite sua idade:");
  scanf("%i",&idade);
 if(idade >=18 && idade <80){//caso adulto
   printf("Já pode ir preso\n");
 }else{//caso adolescente, véio ou kid
   if(idade >=80){
     printf("Pode ir para cova\n");
   }else{
     printf("Você é ranhento\n");
   }//else interno
}//else externo

  return 0;
}//main
