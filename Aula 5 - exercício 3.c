#include <stdio.h>
#include <locale.h>/*
@file: Aula 5 - exercício 3.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 3 da aula 5

Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.
*/
void main() {

float salario = 1200;
float comissao = 0.1;
float total_vendido;
float salario_total;

setlocale(LC_ALL, "");

printf("Informe o valor total vendido no mês: ");
scanf("%f", &total_vendido);

salario_total = (total_vendido * comissao) + 1200;
printf("Seu salário este mês é de = R$ %.2f\n", salario_total);

}//main
