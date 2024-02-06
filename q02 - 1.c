/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 02 da Prova.

37 - Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último
ano. Escreva um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de
acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.
Saldo médio até R$200,00 = 10% do saldo médio
Saldo médio de R$200,00 (não incluído) a R$300,00 (inclusive) = 20% do saldo médio
Saldo médio de R$300,00 (não incluído) a R$400,00 (inclusive) = 25% do saldo médio
Saldo médio acima de R$400,00 = 30% do saldo médio

Resolução:
1- Se o saldo médio for menor ou igual a R$ 200, o crédito será de 10% do saldo médio.
Se o saldo médio for maior que R$ 200 e menor ou igual a R$ 300, o crédito será de 20% do saldo médio.
Se o saldo médio for maior que R$ 300 e menor ou igual a R$ 400, o crédito será de 25% do saldo médio.
Se o saldo médio for maior que R$ 400, o crédito será de 30% do saldo médio.

2 - Após obter o valor do saldo médio do cliente através da entrada de dados pelo usuário, o programa utiliza a estrutura condicional 
"if-else" para verificar em qual das quatro faixas o saldo médio se encaixa, e em seguida, calcula o valor do crédito de acordo com a regra correspondente.

3 - Valor do crédito = saldo médio multiplicado pelo percentual correspondente, que é dado pelas regras acima.

4 - O valor do saldo médio e do crédito são impressos na tela pela função "printf".
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
  
  // Declaração das variáveis
  float saldo_medio, valor_credito;

  printf("Digite o saldo médio do cliente: ");
  scanf("%f", &saldo_medio);

  // Verifica o saldo médio e calcula o valor do crédito com base em uma porcentagem correspondente
  if (saldo_medio <= 200) {
    valor_credito = saldo_medio * 0.1;
  } else if (saldo_medio <= 300) {
    valor_credito = saldo_medio * 0.2;
  } else if (saldo_medio <= 400) {
    valor_credito = saldo_medio * 0.25;
  } else {
    valor_credito = saldo_medio * 0.3;
  }

  // Imprime o saldo médio e o valor do crédito calculado
  printf("Saldo médio: R$%.2f\n", saldo_medio);
  printf("Valor do crédito: R$%.2f\n", valor_credito);

  return 0;
}


