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
void selectionSort(int vetor[TAM])
{
    int i, posicaoMenor, aux, j;

    for (i = 0; i < TAM; i++)
    {
        posicaoMenor = i;

        for (j = i + 1; j < TAM; j++)
        {
            if (vetor[j] < vetor[posicaoMenor])
            {
                posicaoMenor = j;
            }
        }
        if (posicaoMenor != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenor];
            vetor[posicaoMenor] = aux;
        }
    }
}
int main(void)
{
    int vetor[TAM] = {4, 561, 5638, 443, 86, 74, 853, 48, 4185, 489};

    selectionSort(vetor);
    imprimeVetor(vetor);
}
