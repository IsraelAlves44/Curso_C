#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int *ponteiroA, numero, i;
    int vetor[4];

    for (i = 0; i < 4; i++)
    {
        cin >> numero;
        ponteiroA = &numero;
        vetor[i] = *ponteiroA;
    }

    cout << ("##### IMPRIMINDO OS NUMEROS ######");
    for (i = 0; i < 4; i++)
    {
        cout << ("\n") << vetor[i];
    }

    return 0;
}
