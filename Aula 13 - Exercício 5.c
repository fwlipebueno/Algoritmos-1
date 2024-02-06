#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Aula 13 - Exercício 5.c
@author: Felipe Almeida
@date: 23 Nov 21
@brief: Exercício 5 da aula 13 - strings

Faça um programa que receba uma frase e depois exiba quantas vezes
cada vogal aparece. Ele deve contar considerando o tamanho da String.
*/
char frase[101];
int vogalA = 0, vogalE = 0, vogalI = 0, vogalO = 0, vogalU = 0;

int main(){
  printf("Digite uma frase: \n");
  fgets(frase, 101, stdin);
  frase[strcspn(frase,"\n")] = '\0';
  for (int i = 0; i < 101; i++){
      if (frase[i] == 'a' || frase[i] == 'A'){
          vogalA++;
      }//if
      if (frase[i] == 'e' || frase[i] == 'E'){
          vogalE++;
      }//if2
      if (frase[i] == 'i' || frase[i] == 'I'){
          vogalI++;
      }//if3
      if (frase[i] == 'o' || frase[i] == 'O'){
          vogalO++;
      }//if4
      if (frase[i] == 'u' || frase[i] == 'U'){
          vogalU++;
      }//if5
  }//for
  printf("Quantidades de vogais impostas: \n");
  printf("A: %10i\n", vogalA);
  printf("E: %10i\n", vogalE);
  printf("I: %10i\n", vogalI);
  printf("O: %10i\n", vogalO);
  printf("U: %10i\n", vogalU);

return 0;
}//main
