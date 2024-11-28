#include <stdio.h>

/*

    Algoritmo de Bubble Sort em C

    Realiza a ordenacao de um vetor de 5 elementos na ordem crescente

*/

int main()
{

    /*-Declaracao do Vetor e Variaveis-*/
    int vetor[] = {3, 2, 5, 1, 4};     // Vetor com valores desordenados
    int temp;                          // Variavel de armazenamento temporario
    int x, y;                          // Variavel para controle dos loops
    /*---------------------------------*/

    /*-Imprime o Vetor Antes da Ordenacao-*/
    printf("Vetor Nao Ordenado: \t");
    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }
    /*------------------------------------*/
    
    printf("\n");

    /*-Loop Resposavel pela Ordenacao do Vetor-*/
    // Loop que Controla as Repeticoes (Feito de acordo com o tamanho do vetor)
    for(x = 0; x < 5; x++)
    {
        // Loop Interno Responsavel pelas Comparacoes e Trocas
        // A Cada Repeticao, o maior valor e promovido para o proximo indice
        for(y = 0; y < 5 - x - 1; y++)
        {
            // Compara o Valor Atual com o Valor no Proximo Indice
            if(vetor[y] > vetor[y + 1])
            {
                // Se o valor atual for maior que o proximo, realiza a troca
                temp = vetor[y];
                vetor[y] = vetor[y + 1];
                vetor[y + 1] = temp;

            }

        }

    }
    /*-----------------------------------------*/

    /*-Imprime o Vetor Apos a Ordenacao-*/
    printf("Vetor Ordenado: \t");
    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }
    /*----------------------------------*/

    return 0;

}