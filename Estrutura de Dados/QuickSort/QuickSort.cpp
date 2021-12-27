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
void quickSort(int vetor[TAM], int inicio, int fim)
{
    int aux, pivo, esq, dir, meio;

    esq = inicio;
    dir = fim;

    meio = (int)((esq + dir) / 2);

    pivo = vetor[meio];

    while (dir > esq)
    {
        while (vetor[esq] < pivo)
        {
            esq = esq + 1;
        }
        while (vetor[dir] > pivo)
        {
            dir = dir - 1;
        }

        if (esq <= dir)
        {
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            esq = esq + 1;
            dir = dir - 1;
        }
    }

    if (inicio < dir)
    {
        quickSort(vetor, inicio, dir);
    }
    if (esq < fim)
    {
        quickSort(vetor, esq, fim);
    }
}
int main(void)
{
    int vetor[TAM] = {4, 561, 5638, 443, 86, 74, 853, 48, 4185, 489};

    quickSort(vetor, 0, TAM);
    imprimeVetor(vetor);
}
