#include <iostream>
#include <stdlib.h>
#include <string>

#define tam 10
using namespace std;

int empilhar(int pilha[tam], int valor, int *topo)
{
    if (*topo == tam - 1)
    {
        cout << "A pilha esta cheia.\n";
    }
    else
    {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void imprimeVetor(int pilha[tam], int *valor)
{
    int i;

    for (i = 0; i < *valor; i++)
    {
        cout << pilha[i] << "\n";
    }
}

void retirar(int pilha[tam], int *topo, int *valor)
{
    if (*topo == -1)
    {
        cout << "A pilha esta vazia";
    }
    else
    {
        pilha[*topo] = 0;
        *topo = *topo - 1;
        *valor = *valor - 1;
    }
}
int main()
{
    int i, valorEmp;
    int valor;
    int pilha[tam];
    int topo = -1;
    int *valor1 = &valor;
    cout << "Quantas vezes deseja empilhar?: ";
    cin >> valor;
    if (valor > tam)
    {
        cout << "A pilha nao pode ser criada, o valor ultrapassa o valor permitido pela pilha.";
    }
    else
    {
        for (i = 0; i < valor; i++)
        {
            cout << "Digite o valor que deseja empilhar: ";
            cin >> valorEmp;
            empilhar(pilha, valorEmp, &topo);
        }
        imprimeVetor(pilha, valor1);
    }
    retirar(pilha, &topo, valor1);
    retirar(pilha, &topo, valor1);
    retirar(pilha, &topo, valor1);
    cout << "Valor retirado\n";
    imprimeVetor(pilha, valor1);
}