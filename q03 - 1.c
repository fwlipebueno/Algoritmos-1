/*
Felipe de Almeida Bueno - RA: 2408759
Questão 03 da Prova.

41 - Escreva um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas
a seguir, o novo preço e a classificação.
Até R$50,00 = 5% de percentual de aumento
Entre R$50,00 e R$100,00 = 10% de percentual de aumento
Acima de R$100,00 = 15% de percentual de aumento

Até R$80,00 = Classificado como "Barato"
Entre R$80,00 e R$120,00 = Classificado como "Normal"
Entre R$120,00 e R$200,00 = Classificado como "Caro"
Maior que R$200,00 = Classificado como "Muito caro"

Resolução:
1 - Se o preço do produto for menor ou igual a 50, então o novo preço é igual ao preço original multiplicado por 1.05.
Se o preço do produto for maior do que 50 e menor ou igual a 100, então o novo preço é igual ao preço original multiplicado por 1.1.
Se o preço do produto for maior do que 100, então o novo preço é igual ao preço original multiplicado por 1.15.

As etapas envolvidas na classificação do produto são:

2 - Se o preço do produto for menor ou igual a 80, o produto é classificado como "Barato".
Se o preço do produto for maior do que 80 e menor ou igual a 120, o produto é classificado como "Normal".
Se o preço do produto for maior do que 120 e menor ou igual a 200, o produto é classificado como "Caro".
Se o preço do produto for maior do que 200, o produto é classificado como "Muito caro".

3 - Condicionais if/else para calcular o novo preço do produto e classificá-lo de acordo com sua faixa de preço.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

  // Declara as variáveis de preço
  float preco, novo_preco;
  
  // Solicita ao usuário que digite o preço do produto
  printf("Digite o preço do produto: ");
  scanf("%f", &preco);
  
  // Calcula o novo preço com base na faixa de preços do produto
  if (preco <= 50) {
    novo_preco = preco * 1.05;
  } else if (preco > 50 && preco <= 100) {
    novo_preco = preco * 1.1;
  } else {
    novo_preco = preco * 1.15;
  }

  printf("O novo preço é R$%.2f\n", novo_preco);
  
  // Classifica o produto com base em sua faixa de preço
  if (preco <= 80) {
    printf("Classificação: Barato\n");
  } else if (preco > 80 && preco <= 120) {
    printf("Classificação: Normal\n");
  } else if (preco > 120 && preco <= 200) {
    printf("Classificação: Caro\n");
  } else {
    printf("Classificação: Muito caro\n");
  }

  return 0;
}

