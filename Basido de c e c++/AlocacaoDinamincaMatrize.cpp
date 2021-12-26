#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Definindo variaveis
    int linhas = 3;
    int colunas = 3;
    int i, j;
    int **matriz;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    // Alocando as linhas
    matriz = (int **)malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
    return 0;
}
