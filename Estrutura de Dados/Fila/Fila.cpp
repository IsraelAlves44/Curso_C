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
void desenfileirar(int fila[TAM], int valor, int *tras)
{
    if (*tras == -1)
    {
        cout << "A fila ja esta vazia.";
    }
    else
    {
        *tras -= 1;
        fila[*tras] = 0;
    }
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
    int valorEmp, vezes;

    fila_contrutor(&frente, &tras);
    cout << "Digite a quantidade de valores que deseja enfileira: ";
    cin >> vezes;

    if (vezes >= TAM)
    {
        cout << "Fila esta cheia, impossivel alocar.";
    }
    else
    {
        for (i = 0; i < vezes; i++)
        {
            cout << "Digite o calor que deseja enfileirar: ";
            cin >> valorEmp;
            enfileira(fila, valorEmp, &tras);
        }
    }
    imprime_vetor(fila, (tras - frente) + 1);
    desenfileirar(fila, valorEmp, &tras);
    imprime_vetor(fila, (tras - frente) + 1);

    return 0;
}
