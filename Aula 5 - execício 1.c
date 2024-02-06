#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 5 - exercício 1.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 1 da aula 5

Faça um programa que receba a altura de uma pessoa e
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58
*/
int main(){
  float altura, peso_ideal;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  peso_ideal = (altura * 72.7) -58;
  printf("Seu peso ideal=: %.2f\n", peso_ideal);

 return 0;
 }//main
