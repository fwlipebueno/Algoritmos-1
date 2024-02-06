#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 5 - exercício 2.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 2 da aula 5

Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.
*/
int idade, ano_nascimento, ano_atual;
int main(){
  printf("Digite o seu ano de nascimento: ");
  scanf("%i", &ano_nascimento);

  printf("Digite o ano atual ");
  scanf("%i", &ano_atual);

  idade = ano_atual - ano_nascimento;
  printf("Sua idade é %i anos\n", idade);
return 0;
}//main
