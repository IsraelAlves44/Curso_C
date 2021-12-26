#include <stdio.h>
#include <stdlib.h>

int *alocavetor(int tamanho)
{
    int *aux;
    aux = (int *)malloc(tamanho * sizeof(int));
    return aux;
}

int main()
{
    int *vetor;
    int tamanho, numero, i;

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    vetor = alocavetor(tamanho);

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
