#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Aula 13 - Exercício 3.c
@author: Felipe Almeida
@date: 23 Nov 21
@brief: Exercício 3 da aula 13 - strings

Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1.
*/
char nome[5][51];
int telefone[5];
int i, NConsulta = 1, ConsultaLista = 1, CadastroLista = 1, RepetirOperacao = 1;
char RCadastrar = 's', RConsultar = 's';

int main(){
  while (RepetirOperacao >= 0){
      if (CadastroLista >= 0){
          printf("Insira o nome e o telefone:\n");
          for (i = 0; i < 5; i++){
              fflush(stdin);
              printf("Nome %i: \n", i);
              fgets(nome[i], 51, stdin);
              nome[i][strcspn(nome[i],"\n")] = '\0';
              fflush(stdin);
              printf("Telefone %i (detalhe, apenas números):\n", i);
              scanf("%i", &telefone[i]);
              fflush(stdin);
          }//for
      }//if
      if (ConsultaLista >= 0){
          printf("Insira o número da lista que deseja consultar (OBS: início no 0):\n");
          scanf("%i", &NConsulta);
          for (i = 0; i < 5; i++){
              if (i == NConsulta){
                  printf("Nome %i: %s\n", i, nome[i]);
                  printf("Telefone %i: %i\n", i, telefone[i]);
              }//if3
          }//for2
      }//if2
      printf("Gostaria de cadastrar mais algum nome e número? S - Sim. // N - Não.\n");
      scanf("%s", &RCadastrar);
      if (RCadastrar == 's' || RCadastrar == 'S'){
          CadastroLista = 1;
          RepetirOperacao = 1;
      }//if4
      else{
          CadastroLista = -1;
          printf("Gostaria de cadastrar mais algum nome e número? S - Sim. // N - Não.\n");
          scanf("%s", &RConsultar);
          if (RConsultar == 's' || RConsultar == 'S'){
              ConsultaLista = 1;
              RepetirOperacao = 0;
          }//if5
          else{
              RepetirOperacao = -1;
          }//else2
      }//else
  }//while

return 0;
}//main
