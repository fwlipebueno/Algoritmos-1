#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Aula 13 - Exercício 7.c
@author: Felipe Almeida
@date: 23 Nov 21
@brief: Exercício 7 da aula 13 - strings

Escreva um programa que receba uma sigla de um estado da região
Sul ou Sudeste e exiba o nome completo do estado correspondente.
*/
char Estado[2];

int main(){
  printf("Insira a sigla de um estado da região Sul ou Sudeste: \n");
  fgets(Estado, 2, stdin);
  Estado[strcspn(Estado,"\n")] = '\0';
  if (Estado[0] == 'R' && Estado[1] == 'S'){
      printf("%s - Rio Grande do Sul", Estado);
  }//if
  else if (Estado[0] == 'S' && Estado[1] == 'C'){
      printf("%s - Santa Catarina", Estado);
  }//if2
   else if (Estado[0] == 'P' && Estado[1] == 'R'){
      printf("%s - Paraná", Estado);
  }//if3
   else if (Estado[0] == 'S' && Estado[1] == 'P'){
      printf("%s - São Paulo", Estado);
  }//if4
   else if (Estado[0] == 'M' && Estado[1] == 'G'){
      printf("%s - Minas Gerais", Estado);
  }//if5
   else if (Estado[0] == 'R' && Estado[1] == 'J'){
      printf("%s - Rio de Janeiro", Estado);
  }//if6
   else if (Estado[0] == 'E' && Estado[1] == 'S'){
      printf("%s - Espirito Santo", Estado);
  }//if7

return 0;
}//main
