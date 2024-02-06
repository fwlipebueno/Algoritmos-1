#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Aula 13 - Exercício 2.c
@author: Felipe Almeida
@date: 23 Nov 21
@brief: Exercício 2 da aula 13 - strings

Faça um programa que armazene o nome e salário de 5
empregados. Em seguida calcule um aumento de 8% nos
salários e exiba a nova folha de pagamentos.
*/
char EmpregString[5][51];
float Salario = 0, AumentoSalario = 0;

int main(){
  printf("Insira os empregados e seus respectivos salários:\n");
  for (int i = 0; i < 5; i++){
      printf("Empregado %i: \n", i + 1);
      fgets(EmpregString[i], 51, stdin);
      EmpregString[i][strcspn(EmpregString[i],"\n")] = '\0';
      //setbuf(stdin, NULL);
      fpurge(stdin);
      scanf("%.2f", &Salario);
      AumentoSalario = (Salario * 0.08) + Salario;
  }//for
  printf("NOVOS SALÁRIOS DOS EMPREGADOS\n");
  for (int i = 0; i < 5; i++){
      printf("%i - %-10s ", i + 1, EmpregString[i]);
      printf("%.2f\n", AumentoSalario);
  }//for2

return 0;
}//main
