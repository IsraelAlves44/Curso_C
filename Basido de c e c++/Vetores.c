#include <stdio.h>
#include <stdlib.h>
#define TAM 3
void main()
{
    int vetor[TAM], i, soma;
    int count = 4;

    for (count = 0; count <= TAM; count++)
    {
        scanf("%d", &vetor[count]);
    }

    for (count = 0; count <= TAM; count++)
    {
        soma = vetor[count] + vetor[count + 1];
        printf("a posicao %d(vetor[%d] + vetor[%d]) = %d\n", count, count, count + 1, soma);
    }
    system("pause");
}