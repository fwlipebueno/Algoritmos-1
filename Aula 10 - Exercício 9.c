#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>/*
@file: Aula 10 - Exercício 9.c
@author: Felipe Almeida
@date: 16 Nov 21
@brief: Exercício 9 da aula 10 - for

Desenvolva um programa que receba um numero
tamanho e exiba um quadrado de tamanho tamanho
utilizando o carácter #
Exemplo:
Digite o tamanho: 5
# # # # #
# # # # #
# # # # #
# # # # #
# # # # #
Para a exibição utilize
apenas os comandos
printf(“#”);
e
printf(“\n”);
*/
int main(){
  int x, y, tamanho, altura, largura;
  printf("Digite o tamanho do quadrado: ");
  scanf("%d", &tamanho);
  altura = tamanho;
  largura = tamanho;
  for(y = 1; y <= altura; y++){
    for(x = 1; x <= largura; x++){
      printf("#");
    }//for
    printf("\n");
  }//for

return 0;
}//main
