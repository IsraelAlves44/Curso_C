#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define TAM 10

using namespace std;

int *alocavetor(int valor)
{
    int *v;

    v = (int *)malloc(valor * sizeof(int));

    return v;
}

void imprimeSequencial(int *vetor, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        cout << "|" << vetor[i] << "|";
    }
}

int main()
{
    int vetor[TAM], cont, numero, i;

    cout << "Digite o tamanho do vetor: ";
    cin >> numero;
    for (i = 0; i < numero; i++)
    {
        cin >> vetor[i];
    }
    imprimeSequencial(vetor, numero);

    int *vetorlidonahora = alocavetor(numero);

    for (i = 0; i < numero; i++)
    {
        cin >> vetorlidonahora[i];
    }

    imprimeSequencial(vetorlidonahora, numero);
    return 0;
}
