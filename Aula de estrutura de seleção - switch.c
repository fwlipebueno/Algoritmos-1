#include <stdio.h>
#include <stdlib.h>/*
@file: Aula de estrutura de seleção - switch.c
@author: Felipe Almeida
@date: 18 Out 2021
@brief: learning
*/



int main(){
  int opcao;
  printf("Menu de programa: \n");
  printf("1 - Verde\n");
  printf("2 - Amarelo\n");
  printf("3 - Preto\n");
  printf("4 - Branco\n\n");
  printf("Digite sua predileção de cor: ");
  scanf("%i", &opcao);

  switch(opcao){
    case 1:
      printf("Você escolheu verde\n");
     break;
    case 2:
      printf("Você escolheu amarelo\n");
     break;
    case 3:
      printf("Você escolheu preto\n");
     break;
    case 4:
      printf("Você escolheu branco\n");
     break;
    default:
      printf("ERROR, opção indisponível, tente novamente.\n");

  }//switch


  return 0;
}//main
