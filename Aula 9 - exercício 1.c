#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 9 - exercício 1.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 1 da aula 9

Faça um programa que calcule a média para 5 alunos, sendo que cada aluno tem 2 notas (reais).
O programa somente deverá aceitar notas no intervalo fechado de 0 a 10,
solicitando nova digitação quando necessário.
*/

int main(){
    int alunos = 1, primeira_nota = 0, segunda_nota = 0;
    float media = 0;


    printf("Programa para calcular a média de diersos alunos.\n");
    printf("OBS: insira somente valores de 0 a 10\n");
    do{
        do{
            printf("Digite a primeira nota: ", alunos);
            scanf("%i", &primeira_nota);
            if (primeira_nota < 0 || primeira_nota > 10){
                printf("Nota não identificada... Insira valores efetivos, por favor\n");
            }
        }while (primeira_nota < 0 || primeira_nota > 10);
        do{
            printf("Digite a segunda nota: ", alunos);
            scanf("%if", &segunda_nota);
            if (segunda_nota < 0 || segunda_nota > 10){
                printf("Nota inválida, por favor insira uma nota entre 0 a 10: ");
            }
        }while (segunda_nota < 0 || segunda_nota > 10);
        if(primeira_nota >= 0 && primeira_nota <= 10 && segunda_nota >= 0 && segunda_nota <= 10){
            media = ((float)primeira_nota + (float)segunda_nota) / 2;
            printf("Média do aluno %.2f\n", media);
        }
        alunos++;
    }/*do*/ while (alunos <= 5);

return EXIT_SUCCESS;
}//main
