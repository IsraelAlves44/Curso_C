#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

#define TAM 10

using namespace std;

int verificando(int numero)
{
    int vetor[10] = {15, 14, 57, 54, 7, 8, 41, 7, 1, 54};
    int i;

    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] == numero)
        {
            cout << "\nO valor procurado foi encontrado.\n";
            cout << "Posicao. " << i + 1 << "\n";
            return 1;
        }
    }
}
void naoencontrado(int verificando)
{
    if (verificando != 1)
    {
        cout << "O valor nao foi encontrado. \n";
    }
}
int main(void)
{
    int valorProcurado;
    int i;
    int vetor[10] = {15, 14, 57, 54, 7, 8, 41, 7, 1, 54};

    cout << "###########################\n";
    for (i = 0; i < TAM; i++)
    {
        cout << vetor[i] << ", ";
    }

    cout << "\nDigite o valor que deseja ser concontrado: ";
    cin >> valorProcurado;

    verificando(valorProcurado);
    naoencontrado(verificando(valorProcurado));

    system("pause");
}