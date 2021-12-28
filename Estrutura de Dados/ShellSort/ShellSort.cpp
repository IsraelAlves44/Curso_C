#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int pilha[TAM])
{
    int i;

    for (i = 0; i < TAM; i++)
    {
        cout << pilha[i] << "\n";
    }
}
void ShellSort(int vetor[TAM])
{
    int i, j, atual;
    int h = 1;

    while (h < TAM)
    {
        h = 3 * h + 1;
    }

    while (h > 1)
    {
        h = h / 3;

        for (i = h; i < TAM; i++)
        {
            atual = vetor[i];

            j = i - h;

            while ((j >= 0) && (atual < vetor[j]))
            {
                vetor[j + h] = vetor[j];

                j = j - h;
            }

            vetor[j + h] = atual;
        }
    }
}
int main(void)
{
    int vetor[TAM] = {4, 561, 5638, 443, 86, 74, 853, 48, 4185, 489};

    ShellSort(vetor);
    imprimeVetor(vetor);
}
