#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 6 - exercício 1.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 1 da aula 6

Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.
*/
float nota;

int main(){
  printf("Digite sua respectiva nota: ");
  scanf("%f", &nota);

  if(nota >= 6){
    printf("Parabéns, você foi aprovado!\n");//caso aprovado
    }else{
    printf("Infelizmente você foi reprovado.\n");
    }//else
return 0;
}//main
