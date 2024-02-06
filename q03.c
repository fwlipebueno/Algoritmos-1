/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 03 da Prova.

28 - Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através de código. 
Os dados utilizados para a contagem obedecem à seguinte codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;

Elabore um programa que calcule e escreva:
- Total de votos para cada candidato;
- Total de votos nulos;
- Total de votos em branco;
- Percentual dos votos em branco e nulos sobre o total;
- Situação do candidato vencedor sobre os outros dois, no caso, se ele obteve ou não mais votos que os outros dois somados;
- Como finalizador do conjunto de votos, tem-se o valor 0.

Resolução:
O usuário deve inserir o número correspondente ao seu voto, sendo 1, 2, 3 e 4 para os candidatos, 
5 para voto nulo, 6 para voto em branco e 0 para finalizar a votação.

A variável "voto" armazena o valor inserido pelo usuário. 
As variáveis "candidato1", "candidato2", "candidato3" e "candidato4" armazenam o número de votos para cada candidato, 
enquanto "nulo" armazena o número de votos nulos e "branco" armazena o número de votos em branco. 
A variável "total" é usada para contar o número total de votos.

O código utiliza um loop infinito (while(1)) para receber os votos até que o usuário digite 0 para finalizar a votação. 
Dentro do loop, é feita a verificação do valor digitado pelo usuário através da estrutura switch. 
Se o valor for 0, o programa mostra o resultado da votação, o percentual de votos nulos e em branco sobre o total e a situação do candidato vencedor sobre os outros dois.

Caso o valor digitado seja 1, 2, 3 ou 4, o programa adiciona um voto para o respectivo candidato. 
Se o valor for 5, é adicionado um voto para os votos nulos. 
Se for 6, é adicionado um voto para os votos em branco. 
Se o valor for diferente dos valores válidos (1 a 6), o programa exibe uma mensagem de voto inválido.

Em seguida, a variável "total" é incrementada para contar mais um voto. 
O loop infinito continua até que o usuário digite 0 para finalizar a votação. 
Ao final, o programa retorna 0 e encerra a sua execução.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

	// Declaração das variáveis
	int voto, candidato1=0, candidato2=0, candidato3=0, candidato4=0, nulo=0, branco=0, total=0;
    
    // Loop infinito
    while(1) {
    	// Solicita o voto ao usuário e recebe o valor
        printf("Digite o voto (1 a 4 para candidatos, 5 para nulo, 6 para branco, 0 para finalizar):\n");
        scanf("%d", &voto);
        
        // Verifica o valor digitado
        switch(voto) {
            case 0:
            	// Mostra o resultado da votação
                printf("\nTotal de votos para cada candidato:\n");
                printf("Candidato 1: %d\n", candidato1);
                printf("Candidato 2: %d\n", candidato2);
                printf("Candidato 3: %d\n", candidato3);
                printf("Candidato 4: %d\n", candidato4);
                printf("Total de votos nulos: %d\n", nulo);
                printf("Total de votos em branco: %d\n", branco);
                printf("Percentual de votos nulos: %.2f%%\n", (float)nulo/total*100);
                printf("Percentual de votos em branco: %.2f%%\n", (float)branco/total*100);
                
                // Verifica o candidato vencedor
                if(candidato1 > candidato2 + candidato3 + candidato4) {
                    printf("Candidato 1 venceu com %d votos.\n", candidato1);
                }
                else if(candidato2 > candidato1 + candidato3 + candidato4) {
                    printf("Candidato 2 venceu com %d votos.\n", candidato2);
                }
                else if(candidato3 > candidato1 + candidato2 + candidato4) {
                    printf("Candidato 3 venceu com %d votos.\n", candidato3);
                }
                else if(candidato4 > candidato1 + candidato2 + candidato3) {
                    printf("Candidato 4 venceu com %d votos.\n", candidato4);
                }
                else {
                    printf("Nenhum candidato obteve mais votos que os outros somados.\n");
                }
                
                // Encerra a função principal        
                return 0;
                
            // Caso o voto seja 1, adiciona um voto para o candidato 1   
            case 1:
                candidato1++;
                break;
            // Caso o voto seja 2, adiciona um voto para o candidato 2    
            case 2:
                candidato2++;
                break;
            // Caso o voto seja 3, adiciona um voto para o candidato 3    
            case 3:
                candidato3++;
                break;
            // Caso o voto seja 4, adiciona um voto para o candidato 4    
            case 4:
                candidato4++;
                break;
            // Caso o voto seja 5, adiciona um voto para os votos nulos    
            case 5:
                nulo++;
                break;
            // Caso o voto seja 6, adiciona um voto para os votos em branco    
            case 6:
                branco++;
                break;
            // Caso contrário, o voto é inválido    
            default:
                printf("Voto inválido.\n");
                break;
        }
        // Incrementa o total de votos
        total++;
    }
}
