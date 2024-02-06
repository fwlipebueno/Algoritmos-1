#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Aula 13 - Exercício 4.c
@author: Felipe Almeida
@date: 23 Nov 21
@brief: Exercício 4 da aula 13 - strings

Faça um programa que receba um nome, ele deve perguntar
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.
*/
char Nome[51];
int Tamanho_Nome = 0;

int main(){
    while (Tamanho_Nome < 5){
        printf("Insira um nome:\n");
        fgets(Nome, 51, stdin);
        Nome[strcspn(Nome,"\n")] = '\0';
        Tamanho_Nome = strlen(Nome);
        if (Tamanho_Nome < 5){
            printf("Insira o nome novamente, por obséquio\n");
        }//if
    }//while
    printf("Nome: %s\n", Nome);

return 0;
}//main
