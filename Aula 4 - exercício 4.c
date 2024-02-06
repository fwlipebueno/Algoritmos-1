#include <stdio.h>
#include <stdlib.h>/*
file: Aula 4 - exercício 4.c
@author: Felipe Almeida
@date: 07/10/21
@brief: Exercício 4 da aula 4

Tendo a Altura da pessoa definida como uma constante,
calcule seu peso ideal utilizando a seguinte fórmula:
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
