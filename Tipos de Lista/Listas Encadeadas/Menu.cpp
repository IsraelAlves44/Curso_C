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

// Funcao para limpar a tela
void limpatela()
{
    system("cls");
}

// Funcao para retornar o tamanho da lista
int tamanho(Pessoa *ponteiroEncadeado)
{
    // Se a lista estiver vazia
    if (ponteiroEncadeado->nome == "")
    {
        return 0;
    }

    // Lista comeca com valor 0
    int tamanho = 0;

    // Criacao do ponteiro auxiliar
    Pessoa *p = ponteiroEncadeado;

    while (p != NULL)
    {
        p = p->proximo;
        tamanho++;
    }
    return tamanho;
}

// Funcao para imprimir a lista
void imprimeEncadeada(Pessoa *ponteiroEncadeada)
{

    Pessoa *p = ponteiroEncadeada;

    int posicao = 0;

    while (p != NULL)
    {
        cout << posicao << "-"
             << "Nome:" << p->nome << " - "
             << " RG:" << p->rg << "\n";
        p = p->proximo;
        posicao++;
    }

    free(p);
}

// Funcao para adionar no inicio da lista
void adcComecoEncadeada(Pessoa *&ponteiroEncadeado, string nome, int rg)
{
    // Cria uma nova Estrutura
    Pessoa *novoValor = new Pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = ponteiroEncadeado;

    // Verifica se a lista esta vazia
    if (ponteiroEncadeado->nome == "")
    {
        novoValor->proximo = NULL;
    }
    else
    {
        novoValor->proximo = ponteiroEncadeado;
    }

    // Redireciona o Ponteirolo
    ponteiroEncadeado = novoValor;
}

// Principal

int main()
{

    int funcaodesejada = 1;
    int *ponteiro;
    string nome;
    int rg;

    Pessoa *ponteiroEncadeado = new Pessoa;
    ponteiroEncadeado->nome = "";
    ponteiroEncadeado->rg = 0;
    ponteiroEncadeado->proximo = NULL;

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
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inic11io da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "Tamanho da Lista: " << tamanho(ponteiroEncadeado) << "\n";
        cout << "\nEscolha um numero e pressione ENTER: \n";

        if (tamanho(ponteiroEncadeado) == 0)
        {
            cout << "Lista vazia.";
        }
        else
        {
            imprimeEncadeada(ponteiroEncadeado);
        }

        cin >> funcaodesejada;

        limpatela();

        switch (funcaodesejada)
        {
        case 1:
            cout << "Tamanho da Lista: " << tamanho(ponteiroEncadeado) << "\n";
            cout << "\n";
            cout << "Opcao escolhida: 1";
            cout << "\n";
            cout << "Digite um nome: ";
            cin >> nome;
            cout << "Digite um RG: ";
            cin >> rg;

            adcComecoEncadeada(ponteiroEncadeado, nome, rg);
            imprimeEncadeada(ponteiroEncadeado);

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
