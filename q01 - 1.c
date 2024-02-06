/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 01 da Prova.

12 - Criar um programa que calcule o Salário Líquido, 
os Descontos e os Acréscimos de um funcionário:
Descontos:
- IR: Salário Bruto até R$900,00 = Isento, 
de R$900,01 até R$3.000,00 = 3%, 
de R$3.000,01 até R$4.000,00 = 5%, 
acima de R$4.000,00 = 7%.
- Faltas: 3 % por falta.
- Plano de Saúde: 6 %. 
Acréscimos:
- Abono: 25 % do Salário Bruto + R$130,00, 
o valor do abono não pode ser maior que R$1.000,00.
- Vale-Alimentação: 12 %.
- Salário Família: R$25,00 por dependente.
• O Salário Líquido será igual ao Salário Bruto – Descontos + Acréscimos.
• Salário Bruto, número de faltas e quantidade de dependentes deverão ser lidos.
• Todas as porcentagens serão calculadas sobre o Salário Bruto.
• O programa deverá informar o total dos acréscimos, o total dos descontos e o salário líquido.

Resolução:
1 - Cálculo do desconto do Imposto de Renda (IR) com base na tabela de alíquotas:
a. Se o salário bruto for até R$ 900, não há desconto de IR;
b. Se o salário bruto for superior a R$ 900 e até R$ 3.000, o desconto é de 3% do salário bruto;
c. Se o salário bruto for superior a R$ 3.000 e até R$ 4.000, o desconto é de 5% do salário bruto;
d. Se o salário bruto for superior a R$ 4.000, o desconto é de 7% do salário bruto.

2 - Cálculo do desconto por faltas, que é de 3% do salário bruto multiplicado pelo número de faltas do funcionário.

Cálculo dos acréscimos no salário bruto, que são:
a. Plano de saúde: 6% do salário bruto;
b. Abono: o valor digitado pelo usuário, limitado a R$ 1.000;
c. Vale-alimentação: 12% do salário bruto;
d. Salário-família: R$ 25 por dependente.

4 - Cálculo do salário líquido, que é o resultado da subtração do desconto do Imposto de Renda e do desconto por faltas, e da adição dos acréscimos calculados.

5 - Impressão dos resultados, que incluem os descontos e acréscimos, bem como o salário líquido.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

	// Declaração das variáveis
	float salarioBruto, descontoIR, descontoFaltas, acrescimoPlanoSaude, acrescimoAbono, acrescimoValeAlimentacao, salarioFamilia;
    int numFaltas, numDependentes;
    
    // Leitura dos dados do funcionário
    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salarioBruto);
    
    printf("Digite o número de faltas do funcionário: ");
    scanf("%d", &numFaltas);
    
    printf("Digite o número de dependentes do funcionário: ");
    scanf("%d", &numDependentes);
    
    // Cálculo dos descontos
    if (salarioBruto <= 900) {
        descontoIR = 0;
    } else if (salarioBruto <= 3000) {
        descontoIR = salarioBruto * 0.03;
    } else if (salarioBruto <= 4000) {
        descontoIR = salarioBruto * 0.05;
    } else {
        descontoIR = salarioBruto * 0.07;
    }
    
    descontoFaltas = salarioBruto * numFaltas * 0.03;
    
    // Cálculo dos acréscimos
    acrescimoPlanoSaude = salarioBruto * 0.06;
    
    printf("Digite o valor do abono (ou 0 se não houver): ");
    scanf("%f", &acrescimoAbono);
    
    if (acrescimoAbono > 1000) {
        acrescimoAbono = 1000;
    }
    acrescimoValeAlimentacao = salarioBruto * 0.12;
    salarioFamilia = numDependentes * 25;
    
    // Cálculo do salário líquido
    float salarioLiquido = salarioBruto - descontoIR - descontoFaltas + acrescimoPlanoSaude + acrescimoAbono + acrescimoValeAlimentacao + salarioFamilia;
    
    // Impressão dos resultados
    printf("Descontos:\n");
    printf(" - IR: R$%.2f\n", descontoIR);
    printf(" - Faltas: R$%.2f\n", descontoFaltas);
    
    printf("Acréscimos:\n");
    printf(" + Plano de saúde: R$%.2f\n", acrescimoPlanoSaude);
    printf(" + Abono: R$%.2f\n", acrescimoAbono);
    printf(" + Vale-alimentação: R$%.2f\n", acrescimoValeAlimentacao);
    printf(" + Salário-família: R$%.2f\n", salarioFamilia);
    
    printf("Salário líquido: R$%.2f\n", salarioLiquido);
    
    return 0;
}

		
		
		
		
