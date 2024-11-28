#include <stdio.h>

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

        for(y = x + 1; y < 5; y++)
        {

            if(vetor[x] > vetor[y])
            {

                temp = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = temp;

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