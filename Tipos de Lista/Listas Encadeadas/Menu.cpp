#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;
struct Pessoa
{
    string nome;
    int rg;
    struct Pessoa *proximo;
};

void limpatela()
{
    system("cls");
}
int tamanho(Pessoa *ponteiroEncadeado)
{
    int tamanho = 0;

    Pessoa *p = ponteiroEncadeado;

    while (p != NULL)
    {
        p = p->proximo;
        tamanho++;
    }
    return tamanho;
}
void imprimeEncadeada(Pessoa *ponteiroEncadeada)
{
    Pessoa *p = ponteiroEncadeada;

    int posicao = 0;

    while (p != NULL)
    {
        cout << posicao << "-" << p->nome << "," << p->rg << "\n";
        p = p->proximo;
        posicao++;
    }

    free(p);
}

int main()
{

    int funcaodesejada = 1;
    int *ponteiro;

    Pessoa *ponteiroEncadeado;

    // Cria o primeiro valor

    Pessoa *novoPrimeiroValor = new Pessoa;
    novoPrimeiroValor->nome = "Rogerio";
    novoPrimeiroValor->rg = 150975;
    novoPrimeiroValor->proximo = NULL;

    ponteiroEncadeado = novoPrimeiroValor;

    Pessoa *novoSegundoValor = new Pessoa;
    novoSegundoValor->nome = "ana";
    novoSegundoValor->rg = 418;
    novoSegundoValor->proximo = NULL;

    novoPrimeiroValor->proximo = novoSegundoValor;

    while (funcaodesejada < 9 && funcaodesejada > 0)
    {
        cout << "Tamanho da Lista: " << tamanho(ponteiroEncadeado) << "\n";
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";
        imprimeEncadeada(ponteiroEncadeado);

        cin >> funcaodesejada;

        limpatela();

        switch (funcaodesejada)
        {
        case 1:
            cout << "Opcao escolhida: 1";
            break;
        case 2:
            cout << "Opcao escolhida: 2";
            break;
        case 3:
            cout << "Opcao escolhida: 3";
            break;
        case 4:
            cout << "Opcao escolhida: 4";
            break;
        case 5:
            cout << "Opcao escolhida: 5";
            break;
        case 6:
            cout << "Opcao escolhida: 6";
            break;
        case 7:
            cout << "Opcao escolhida: 7";
            break;
        case 8:
            cout << "Opcao escolhida: 8";
            break;
        case 9:
            cout << "Opcao escolhida: 9";
            break;
        }

        return 0;
    }
}
