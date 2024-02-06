#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 7 - exercício 3.c
@author: Felipe Almeida
@date: 19 Out 2021
@brief: Exercício 3 da aula 7

Altere o exercício anterior para receber os 3 valores no
mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado é: 13
*/
char opcao;
float numero1, numero2, calculo;

int main(){
  printf("Menu de programa:\nInsira o primerio valor, operação visada";
  printf("(+, -, /,* ) e o segundo valor, respectivamente (Ex.: 5+8)\nDigite aqui: ");
  scanf("%f %c %f", &numero1, &opcao, &numero2);

  switch (opcao){
    case '+':
      calculo = numero1 + numero2;
      printf("Você selecionou a opção de soma.\n%.1f%c%.1f = %.1f", numero1, opcao, numero2, calculo);
      break;
    case '-':
      calculo = numero1 - numero2;
      printf("Você selecionou a opção de soma.\n%.1f%c%.1f = %.1f", numero1, opcao, numero2, calculo);
      break;
    case '/':
      calculo = numero1 / numero2;
      printf("Você selecionou a opção de soma.\n%.1f%c%.1f = %.1f", numero1, opcao, numero2, calculo);
      break;
    case '*':
      calculo = numero1 * numero2;
      printf("Você selecionou a opção de soma.\n%.1f%c%.1f = %.1f", numero1, opcao, numero2, calculo);
      break;
    default:
      printf("ERROR, opção indisponível, tente novamente...");
      break;
  }//switch
return 0;
}//main
