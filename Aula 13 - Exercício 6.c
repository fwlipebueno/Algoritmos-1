#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Aula 13 - Exercício 6.c
@author: Felipe Almeida
@date: 23 Nov 21
@brief: Exercício 6 da aula 13 - strings

Faça um programa que receba um nome e um sobrenome. Ele deve
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José...*/
char Nome[50];
char Sobrenome[50];


int main(){
   printf("Insira seu nome: \n");
   fgets(Nome, 50, stdin);
   Nome[strcspn(Nome, "\n")] = '\0';
   setbuf(stdin, NULL);
   printf("Insira seu sobrenome: \n");
   fgets(Sobrenome, 50, stdin);
   Sobrenome[strcspn(Sobrenome, "\n")] = '\0';
   setbuf(stdin, NULL);

   strcat(Sobrenome, Nome);
   printf("%s", Sobrenome);

return 0;
}//main
