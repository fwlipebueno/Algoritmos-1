#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 7 - exercício 2.c
@author: Felipe Almeida
@date: 19 Out 2021
@brief: Exercício 2 da aula 7

Crie uma calculadora usando a instrução switch, que
pergunte qual das operações básicas quer fazer (+, -, *
e /), em seguida peça os dois números e mostre o
resultado da operação matemática entre eles.
*/
int opcao, numero1, numero2, calculo;

int main(){
 printf("Menu de programa:\n1 - Soma\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n");
 printf("Digite sua opção: ");
  scanf("%i", &opcao);

  switch (opcao){
    case 1:
      printf("Você escolheu a opção 1.\nDigite o primeiro valor: ");
      scanf("%i", &numero1);
      printf("Digite o segundo valor: ");
      scanf("%i", &numero2);
      calculo = numero1 + numero2;
      printf("O resultado da soma é: %i\n", calculo);
      break;
    case 2:
      printf("Você escolheu a opção 2.\nDigite o primeiro valor: ");
      scanf("%i", &numero1);
      printf("Digite o segundo valor: ");
      scanf("%i", &numero2);
      calculo = numero1 - numero2;
      printf("O resultado da subtração é: %i\n", calculo);
      break;
    case 3:
      printf("Você escolheu a opção 3.\nDigite o primeiro valor: ");
      scanf("%i", &numero1);
      printf("Digite o segundo valor: ");
      scanf("%i", &numero2);
      calculo = numero1 / numero2;
      printf("O resultado da divisao é: %i\n", calculo);
      break;
    case 4:
      printf("Você escolheu a opção 4.\nDigite o primeiro valor: ");
      scanf("%i", &numero1);
      printf("Digite o segundo valor: ");
      scanf("%i", &numero2);
      calculo = numero1 * numero2;
      printf("O resultado da multiplicação é: %i\n", calculo);
      break;
    default:
      printf("ERROR, opção indisponível, tente novamente...\n");
      break;
  }//switch
return 0;
}//main
