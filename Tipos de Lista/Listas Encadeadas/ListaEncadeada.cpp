#include <stdlib.h>
#include <stdio.h>
#include <new>
#include <iostream>

using namespace std;
struct estrutura
{
    int valor;
    struct estrutura *proximo;
};

int main()
{

    // Fazendo inicio da lista
    estrutura *ponteiroEncadeado;

    // Fazendo primeiro valor
    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor->valor = 13;
    novoPrimeiroValor->proximo = NULL;
    ponteiroEncadeado = novoPrimeiroValor;

    // Fazendo segundo valor
    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor->valor = 45;
    novoSegundoValor->proximo = NULL;
    ponteiroEncadeado->proximo = novoSegundoValor;

    // Imprime o valor
    while (ponteiroEncadeado != NULL)
    {
        cout << "Valor: " << ponteiroEncadeado->valor << "\n";
        ponteiroEncadeado = ponteiroEncadeado->proximo;
    }

    return 0;
}
