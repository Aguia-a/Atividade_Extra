#include <stdio.h>

/*

    Algoritmo de Insertion Sort em C

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
    // Loop Principal (Passa pelo vetor, inicando a partir do segundo elemento)
    for(x = 1; x <= 5 - 1; x++)
    {
        // Loop Interno, responsavel por colocar o valor atual na posicao correta
        // entre os valores que ja foram ordenados
        for(y = x; y > 0 && vetor[y - 1] > vetor[y]; y--)
        {
            // Faz a troca dos valores para deixa-lo na posicao correta
            temp = vetor[y];
            vetor[y] = vetor[y - 1];
            vetor[y - 1] = temp;

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