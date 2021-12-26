#include <stdlib.h>
#include <stdio.h>

int main()
{
    int tamanho, cont, i;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int *vetor = new int(tamanho);

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
