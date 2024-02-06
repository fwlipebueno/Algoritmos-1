#include <stdio.h>
#include <locale.h>/*
@file: Aula 4 - exercício 2.c
@author: Felipe Almeida
@date: 07/10/21
@brief: Exercício 2 da aula 4

2) Uma conta de caderneta de poupança foi aberta com um
depósito de R$ 500,00. Imagine que esta conta é remunerada
em 1% de juros ao mês. Qual será o valor da conta após três
meses?
[Para calcular potência, deve-se colocar a biblioteca #include <math.h>
no começo do arquivo, e usar a função pow. Exemplo:
variavel = pow(base,expoente);]
*/
void main() {
  //500 - 1% = 5* 3= 15, o valor da remuneração é de 1 % ao mês, que é de 5, em três meses terá a remuneração de 3*5= 15 resposta haverá na conta 515,00 R$.
float conta, juros, totalAumento, totalValor;

setlocale(LC_ALL, "");

printf("Informe o valor: ");
scanf("%f", &conta);

printf("Informe o juros atribuido: ");
scanf("%f", &juros);
juros = juros * 3;
totalAumento = conta * juros / 100;
printf("Aumento de R$ %.2f\n", totalAumento);

totalValor = conta + totalAumento;
printf("Novo valor após 3 meses = R$ %.2f\n", totalValor);

}//main
