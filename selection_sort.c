#include <stdio.h>

/*

    Algoritmo de Selection Sort em C

    Realiza a ordenacao de um vetor de 5 elementos na ordem crescente

*/

int main()
{

    /*-Declaracao do Vetor e Variaveis-*/
    int vetor[] = {3, 2, 5, 1, 4};     // Vetor com valores desordenados
    int temp;                          // Variavel de armazenamento temporario
    int x, y;                          // Variaveis para controle dos loops
    /*---------------------------------*/

    /*-Imprime o Vetor Antes da Ordenacao-*/
    printf("Vetor Nao Ordenado: \t");
    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }
    /*------------------------------------*/

    printf("\n");

    /*-Loop Responsavel pela Ordenacao do Vetor-*/
    // Loop Principal (Define a posicao atual que sera preenchida)
    for(x = 0; x < 5; x++)
    {
        // Loop Interno, responsavel por encontrar o menor valor entre aqueles
        // que nao foram ordenados
        for(y = x + 1; y < 5; y++)
        {
            // Se encontrado um valor inferior ao atual, faz a troca
            if(vetor[x] > vetor[y])
            {

                temp = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = temp;

            }

        }

    }
    /*------------------------------------------*/

    /*-Imprime o Vetor Apos a Ordenacao-*/
    printf("Vetor Ordenado: \t");
    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }
    /*----------------------------------*/
    
    return 0;

}