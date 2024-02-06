#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 8 - exercício 7.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 7 da aula 8

Faça um programa que calcule o fatorial de um número a ser digitado.
*/

int main(){
    unsigned long int numero, fatorial, contador;

    fatorial = 1;
    contador = 1;
    printf("Digite um número:");
    scanf("%lu",&numero);
    while (contador <= numero) {
        fatorial = fatorial * contador;
        contador++;
    }//while
    printf("O fatorial de desse valor é: %lu.\n",fatorial);

return EXIT_SUCCESS;
}//main
