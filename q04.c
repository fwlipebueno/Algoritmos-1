/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 04 da Prova.

32 - Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, 
a qual coletou os seguintes dados referentes a cada habitante para serem analisados:
- Sexo (masculino ou feminino);
- Cor dos olhos (azuis, verdes, castanhos);
- Cor dos cabelos (louros, castanhos, pretos);
- Idade.

Escreva um programa que determine e escreva:
- A maior idade dos habitantes;
- A percentagem de indivíduos do sexo feminino cuja a idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.
- Final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.

Resolução:
O programa em C lê informações de uma população de habitantes e realiza duas tarefas principais:

Determinar a maior idade dos habitantes.
Calcular a percentagem de indivíduos do sexo feminino cuja a idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.
O programa realiza essas tarefas utilizando variáveis para armazenar informações relevantes, como maior_idade para a maior idade encontrada até o momento, 
cont_fem_olhos_verdes_cabelos_louros para o número de mulheres que atendem às características especificadas e cont_fem_total para o número total de mulheres.

Para determinar a maior idade dos habitantes, o programa compara a idade de cada habitante com a maior idade encontrada até o momento, armazenada na variável maior_idade. 
Se a idade do habitante for maior do que a maior idade encontrada até o momento, a variável maior_idade é atualizada com a nova idade.

Para calcular a percentagem de mulheres que atendem às características especificadas, o programa utiliza as variáveis cont_fem_olhos_verdes_cabelos_louros e cont_fem_total. 
A percentagem é calculada pela fórmula:
percentagem = (cont_fem_olhos_verdes_cabelos_louros / cont_fem_total) * 100
Essa fórmula divide o número de mulheres que atendem às características especificadas pelo número total de mulheres e multiplica por 100 para obter a percentagem em forma de porcentagem.

Nota-se que o programa faz a conversão do resultado para float antes de realizar a divisão. 
Isso é necessário para garantir que a divisão seja feita em ponto flutuante e não em inteiro, o que garante que a percentagem seja corretamente calculada. 
Se a divisão fosse realizada em inteiro, o resultado seria truncado para o número inteiro mais próximo, o que poderia produzir um resultado incorreto.
*/

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

	// Inicialização das variáveis
    int idade, maior_idade = 0;
    char sexo, olhos, cabelos;
    int cont_fem_olhos_verdes_cabelos_louros = 0;
    int cont_fem_total = 0;

	// Loop para leitura dos dados dos habitantes
    while (1) {
    	// Solicita a idade e armazena na variável correspondente
        printf("Digite a idade (-1 para finalizar): ");
        scanf("%d", &idade);
        
        // Verificação de final do conjunto de habitantes
        if (idade == -1) {
            break;
        }
		
		// Solicita o sexo e armazena na variável correspondente
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
		
		// Solicita a cor dos olhos e armazena na variável correspondente
        printf("Digite a cor dos olhos (A/V/C): ");
        scanf(" %c", &olhos);
		
		// Solicita a cor dos cabelos e armazena na variável correspondente
        printf("Digite a cor dos cabelos (L/C/P): ");
        scanf(" %c", &cabelos);
		
		// Verificação da maior idade
        if (idade > maior_idade) {
            maior_idade = idade;
        }
		
		// Contagem do número total de mulheres
        if (sexo == 'F') {
            cont_fem_total++;
            
            // Verificação de mulheres com olhos verdes e cabelos louros
            if (idade >= 18 && idade <= 35 && olhos == 'V' && cabelos == 'L') {
                cont_fem_olhos_verdes_cabelos_louros++;
            }
        }
    }
	
	// Impressão dos resultados
    printf("Maior idade: %d\n", maior_idade);

    if (cont_fem_total == 0) {
        printf("Nenhum habitante do sexo feminino foi registrado.\n");
    } else {
        float perc_fem_olhos_verdes_cabelos_louros = (float) cont_fem_olhos_verdes_cabelos_louros / cont_fem_total * 100;
        printf("Percentagem de mulheres com olhos verdes, cabelos louros e idade entre 18 e 35: %.2f%%\n", perc_fem_olhos_verdes_cabelos_louros);
    }

    return 0;
}

