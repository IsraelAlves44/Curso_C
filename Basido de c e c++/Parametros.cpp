#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
using namespace std;

void mostrarSucessor(int numero)
{
    numero = numero + 1;
    printf("O sucessor eh: %d\n", numero);
};

int main(void)
{
    int numero1;

    cout << ("Digite um numero: ");
    cin >> numero1;

    mostrarSucessor(numero1);

    system("pause");
}
