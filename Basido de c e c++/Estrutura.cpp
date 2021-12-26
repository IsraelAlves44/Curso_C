#include <stdio.h>
#include <string.h>
#include <iostream>
#include <new>

using namespace std;

struct fruta
{
    string cor;
    string nome;
};

int main(void)
{
    fruta *primeiraFruta = new fruta;

    primeiraFruta->cor = "amarelo";
    primeiraFruta->nome = "Banana";

    fruta *listadeFruta = new fruta[2];

    listadeFruta[0].cor = "Vermelho";
    listadeFruta[0].nome = "Morango";
    listadeFruta[1].cor = "Verde";
    listadeFruta[1].nome = "Kiwi";

    for (int i = 0; i < 2; i++)
    {
        cout << "\nA cor da fruta eh: " << listadeFruta[i].cor << ", nome: " << listadeFruta[i].nome;
    }

    return 0;
}
