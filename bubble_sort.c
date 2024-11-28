#include <stdio.h>
//a
int main()
{

    int vetor[] = {3, 2, 5, 1, 4};
    int temp;
    int x, y;

    printf("Vetor Nao Ordenado: \t");

    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }
    
    printf("\n");

    for(x = 0; x < 5; x++)
    {

        for(y = 0; y < 5 - x - 1; y++)
        {

            if(vetor[y] > vetor[y + 1])
            {

                temp = vetor[y];
                vetor[y] = vetor[y + 1];
                vetor[y + 1] = temp;

            }

        }

    }

    printf("Vetor Ordenado: \t");

    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }

    return 0;

}