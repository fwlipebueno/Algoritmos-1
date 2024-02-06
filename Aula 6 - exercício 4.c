#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*
@file: Aula 6 - exercício 4.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 4 da aula 6

Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução
Base de Cálculo (R$) Alíquota (%) Parcela a
Deduzir (R$)
de 0,00 até 1.903,98 isento 0,00
de 1.903,99 até 2.826,65 7,5 142,80
de 2.826,66 até 3.751,05 15 354,80
de 3.751,06 até 4.664,68 22,5 636,13
a partir de 4.664,68 27,5 869,36
*/
float salario, aliquota, parcela, imposto;

int main(){
  printf("Informe seu salário para calcularmos o imposto a ser creditado: ");
  scanf("%f", &salario);

  if(salario > 0 && salario <= 1903.98){
    imposto = 0;
    printf("O total de imposto a ser pago é: %.2f\n", imposto);
  }else if(salario > 1903.98 && salario <= 2826.65){
    aliquota = 0.075;
    parcela = 142.80;
    imposto = (salario * aliquota) - parcela;
    printf("O total de imposto a ser pago é: %.2f\n", imposto);
  }else if(salario > 2826.65 && salario <= 3751.05){
    aliquota = 0.15;
    parcela = 354.80;
    imposto = (salario * aliquota) - parcela;
    printf("O total de imposto a ser pago é: %.2f\n", imposto);
  }else if(salario > 3751.05 && salario <= 4664.68){
    aliquota = 0.225;
    parcela = 636.13;
    imposto = (salario * aliquota) - parcela;
    printf("O total de imposto a ser pago é: %.2f\n", imposto);
  }else if(salario > 4664.68){
    aliquota = 0.275;
    parcela = 868.36;
    imposto = (salario * aliquota) - parcela;
    printf("O total de imposto a ser pago é: %.2f\n", imposto);
  }//else
  return 0;
}//main
