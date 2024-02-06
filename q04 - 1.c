/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 04 da Prova.

42 - Escreva um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o novo salário.
Até R$300,00 = 50% de aumento
De R$300,00 (não incluído) até R$500,00 (inclusive) = 40% de aumento
De R$500,00 (não incluído) até R$700,00 (inclusive) = 30% de aumento
De R$700,00 (não incluído) até R$800,00 (inclusive) = 20% de aumento 
De R$800,00 (não incluído) até R$1000,00 (inclusive) = 10% de aumento
Acima de R$1000,00 = 5% de aumento

Resolução:
1 - A fórmula utilizada para calcular o novo salário é:
novo_salario = salario * aumento

2 - Regras de aumento:
Se salario <= 300, aumento = 1.5 (ou 150%)
Se 300 < salario <= 500, aumento = 1.4 (ou 140%)
Se 500 < salario <= 700, aumento = 1.3 (ou 130%)
Se 700 < salario <= 800, aumento = 1.2 (ou 120%)
Se 800 < salario <= 1000, aumento = 1.1 (ou 110%)
Se salario > 1000, aumento = 1.05 (ou 105%)

3 - Após calcular o novo salário utilizando a fórmula acima, o código exibe o resultado com duas casas decimais após a vírgula utilizando a função printf.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
	
	// Declaração das variáveis
    float salario, novo_salario;
    
    // Solicita que o usuário digite o salário atual do funcionário
    printf("Digite o salário do funcionário: R$");
    scanf("%f", &salario); // Lê o valor do salário digitado pelo usuário e o armazena na variável salário

	// Verifica o salário atual e calcula o novo salário de acordo com as regras de aumento predefinidas
    if (salario <= 300.0) {
        novo_salario = salario * 1.5;  // 50% de aumento
    } else if (salario <= 500.0) {
        novo_salario = salario * 1.4;  // 40% de aumento
    } else if (salario <= 700.0) {
        novo_salario = salario * 1.3;  // 30% de aumento
    } else if (salario <= 800.0) {
        novo_salario = salario * 1.2;  // 20% de aumento
    } else if (salario <= 1000.0) {
        novo_salario = salario * 1.1;  // 10% de aumento
    } else {
        novo_salario = salario * 1.05;  // 5% de aumento
    }

	// Exibe na tela o valor do novo salário com duas casas decimais após a vírgula
    printf("O novo salário do funcionário é R$%.2f\n", novo_salario);

    return 0;
}

