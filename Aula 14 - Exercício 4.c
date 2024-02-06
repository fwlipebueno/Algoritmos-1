#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 14 - Exercício 4.c
@author: Felipe Almeida
@date: 30 Nov 21
@brief: Exercício 4 da aula 14

Faça uma função que receba a média final de um aluno
por parâmetro e retorne o seu conceito, conforme a tabela
abaixo:
Nota Conceito
[ 9 - 10] A
[ 7 – 9 [ B
[ 5 - 7 [ C
[ 0 – 5 [ D*/
char Conceito(int media){
    char conceito;

    if (media >= 9){
        conceito = 'A';
    }//if
    else if (media >= 7){
        conceito = 'B';
    }//if2
    else if (media >= 5){
        conceito = 'C';
    }//if3
    else{
        conceito = 'D';
    }//else
    return conceito;
}//char
int main(){
    int Media = 0;
    char Retorno_Conceito;

    printf("Insira sua média:\n");
    scanf("%i", &Media);
    Retorno_Conceito = Conceito(Media);
    printf("Conceito= %c", Retorno_Conceito);

return 0;
}//main
