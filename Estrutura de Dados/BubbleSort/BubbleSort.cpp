#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#define TAM 10

using namespace std;

void imprime(int vetor[])
{
    int i;

    for (i = 0; i < TAM; i++)
    {
        cout << "|" << vetor[i] << "|";
    }
}
int main(int argc, char const *argv[])
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int x, y, aux;

    for (x = 0; x < TAM; x++)
    {
        for (y = 0; y < TAM; y++)
        {
            if (vetor[x] > vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
    imprime(vetor);

    return 0;
}
