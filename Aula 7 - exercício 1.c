#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 7 - exercício 1.c
@author: Felipe Almeida
@date: 19 Out 2021
@brief: Exercício 1 da aula 7

Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:
*/

int main(){
  int opcao, numero, idade;
  printf("Menu de opções: \n1 - Verifica par/ímpar\n2 - Verifica maior/menor de idade\n");
  printf("Digite sua opção: ");
  scanf("%i", &opcao);

  switch (opcao){
    case 1:
      printf("Voce escolheu o caso 1, portanto digite um valor: \n");
      scanf("%i", &numero);
      if(numero % 2 == 0){
        printf("O numero é par.\n");
      }else{
        printf("O numero é ímpar.\n");
      }
      break;
    case 2:
      printf("Você escolheu o caso 2, portanto digite sua idade: \n");
      scanf("%i", &idade);
      if(idade >= 18){
        printf("Você é maior de idade.\n");
      }else{
        printf("Você é menor de idade.\n");
      }
      break;
    default:
      printf("ERROR, opção indisponível, tente novamente...\n");
      break;


  }//switch
return 0;
}//main
