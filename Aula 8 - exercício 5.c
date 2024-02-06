#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*
@file: Aula 8 - exercício 5.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 5 da aula 8

Faça um programa que receba um número real, calcule e exiba o quadrado dele.
O programa deverá repetir esse procedimento para 10 números.
*/

float numero_real, quadrado;

int main(){
  int i = 1;
  while(i <= 10){
    printf("Insira um número real: ");
    scanf("%f", &numero_real);
    quadrado = pow(numero_real, 2);
    printf("O quadrado de %.f é: %.f\n", numero_real, quadrado);
    i++;
  }//while

return 0;
}//main
