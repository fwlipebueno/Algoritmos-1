/*
Felipe de Almeida Bueno - RA: 2408759
Questão 05 da Prova.

50 - Escreva um programa que receba:
• O código do produto comprado; e
• A quantidade comprada do produto.
Calcule e mostre:
• O preço unitário do produto comprado, seguindo a Tabela I;
• O preço total da nota;
• O valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
• O preço final da nota depois do desconto.
Código 1 a 10 = R$10,00
Código 11 a 20 = R$15,00
Código 21 a 30 = R$20,00
Código 31 a 40 = R$30,00

Preço total da nota até R$250,00 (não incluído) = 5% de desconto
Preço total da nota entre R$250,00 e R$500,00 (inclusive) = 10% de desconto
Preço total da nota acima de R$500,00 = 15% de desconto

Resolução:
1 - Seja p o preço unitário do produto, q a quantidade comprada, t o preço total da compra, d o valor do desconto e f o preço final da compra.

Se o código do produto estiver entre 1 e 10, p = 10.0.
Se o código do produto estiver entre 11 e 20, p = 15.0.
Se o código do produto estiver entre 21 e 30, p = 20.0.
Se o código do produto estiver entre 31 e 40, p = 30.0.

2 - t = p * q

Se t < 250.0, d = 0.05 * t.
Se 250.0 <= t <= 500.0, d = 0.1 * t.
Se t > 500.0, d = 0.15 * t.

f = t - d.

3 - O programa exibe os resultados na saída do console, com os valores formatados para exibir 2 casas decimais após a vírgula.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
	
	// Declaração das variáveis
    int codigo, quantidade;
    float preco_unitario, preco_total, desconto, preco_final;
    
    // Entrada de dados
    printf("Informe o código do produto (entre 1 e 40): ");
    scanf("%d", &codigo);
    
    printf("Informe a quantidade comprada: ");
    scanf("%d", &quantidade);
    
    // Calculando o preço unitário de acordo com o código do produto
    if (codigo >= 1 && codigo <= 10) {
        preco_unitario = 10.0;
    } else if (codigo >= 11 && codigo <= 20) {
        preco_unitario = 15.0;
    } else if (codigo >= 21 && codigo <= 30) {
        preco_unitario = 20.0;
    } else if (codigo >= 31 && codigo <= 40) {
        preco_unitario = 30.0;
    } else {
    	// Caso o código do produto seja inválido, exibe uma mensagem de erro e encerra o programa
        printf("Código inválido.\n");
        return 0;
    }
    
    // Calculando o preço total da compra
    preco_total = preco_unitario * quantidade;
    
    // Calculando o desconto de acordo com o valor total da compra
    if (preco_total < 250.0) {
        desconto = 0.05 * preco_total;
    } else if (preco_total <= 500.0) {
        desconto = 0.1 * preco_total;
    } else {
        desconto = 0.15 * preco_total;
    }
    
    // Calculando o preço final da compra
    preco_final = preco_total - desconto;
    
    // Exibindo os resultados da compra
    printf("Preço unitário: R$%.2f\n", preco_unitario);
    printf("Preço total da nota: R$%.2f\n", preco_total);
    printf("Valor do desconto: R$%.2f\n", desconto);
    printf("Preço final da nota: R$%.2f\n", preco_final);
    
    return 0;
}


