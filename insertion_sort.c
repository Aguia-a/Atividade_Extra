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

    for(x = 1; x <= 5 - 1; x++)
    {

        for(y = x; y > 0 && vetor[y - 1] > vetor[y]; y--)
        {

            temp = vetor[y];
            vetor[y] = vetor[y - 1];
            vetor[y - 1] = temp;

        }

    }

    printf("Vetor Ordenado: \t");
    
    for(x = 0; x < 5; x++)
    {

        printf("%d ", vetor[x]);

    }

    return 0;

}