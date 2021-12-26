#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

void fila_contrutor(int *frente, int *tras)
{
    *frente = 0;
    *tras = -1;
}
void enfileira(int fila[TAM], int valor, int *tras)
{
    *tras += 1;
    fila[*tras] = valor;
}
void imprime_vetor(int fila[TAM], int tamanho)
{
    int i;

    cout << "\n";
    for (i = 0; i < tamanho; i++)
    {
        cout << fila[i] << " - ";
    }
}

int main()
{
    int fila[TAM];
    int frente, tras;
    int valor;
    int i;

    fila_contrutor(&frente, &tras);
    enfileira(fila, 5, &tras);
    imprime_vetor(fila, (tras - frente) + 1);

    return 0;
}
