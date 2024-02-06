/*
@file: Aula 4 - exercício 1.c
@author: Felipe Almeida
@date: 07/10/21
@brief: Exercício 1 da aula 4

1) Escreva um programa para determinar a quantidade de litros
de combustível gastos em uma viagem por um automóvel que
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
é de 35 min e a velocidade média do automóvel é 80 km/h.
*/
#include <stdio.h>
#include <stdlib.h>
int velocidade = 80;
int gasto = 12;
int espaco = 0;
int tempo = 35;

int main(){
  //para determinar distância percorrida, multiplica-se a velocidade pelo tempo.
  float valor1 = (float)tempo / 60;
  float valor2 = (float)valor1 * (float)velocidade;
  printf("Temos ciência de que a velocidade média vale 80km/h e que o tempo foi de 0.58h\n");
  printf("(0.58h x 60 = 35 minutos).\n");
  printf("Ao multiplicar a velocidade média pelo tempo em horas, obtemos a distância de %.2fkm\n\n", valor2);
  espaco = (float)valor2;
  float valor3 = (float)valor2 / (float)gasto;
  printf("Sabemos que a autonomia do automóvel vale 12km/L\n");
  printf("Ou seja, a quantidade de combustível gasta foi: %.3f litros\n", valor3);

  return 0;
  }//main
