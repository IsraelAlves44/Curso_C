#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>

#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM])
{
    int i;

    cout << "\n";

    for (i = 0; i < TAM; i++)
    {
        cout << "|" << vetor[i] << "|";
    }
}
void insertionSort(int vetor[TAM])
{
    int i, j, atual;

    for (i = 1; i < TAM; i++)
    {
        atual = vetor[i];
        j = i - 1;
        while ((j >= 0) && (atual < vetor[j]))
        {
            vetor[j + 1] = vetor[j];

            j = j - 1;
        }
        vetor[j + 1] = atual;
    }
}

int main()
{
    int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    insertionSort(vetor);
    imprimeVetor(vetor);
}
