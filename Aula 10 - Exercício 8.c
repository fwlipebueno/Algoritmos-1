#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>/*
@file: Aula 10 - Exercício 8.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 8 da aula 10 - for

Utilizando a estrutura do laço for aninhado, crie um
programa que exiba a tabuada de todos os números de
1 a 10 no seguinte formato:
Tabuada do 1:
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
...
Tabuada do 5:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
...
*/
int main(){
 int primeiro_membro, segundo_membro, resultado;
 for(primeiro_membro = 1; primeiro_membro <= 10; primeiro_membro++){
  for(segundo_membro = 1; segundo_membro <= 10; segundo_membro++){
    resultado = primeiro_membro * segundo_membro;
    printf("%d X %d = %d\n", primeiro_membro, segundo_membro, resultado);
  }//for
  printf("\n");
  }//for

return 0;
}//main
