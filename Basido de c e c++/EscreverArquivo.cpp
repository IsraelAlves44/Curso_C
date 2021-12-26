#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivoSaida;

    arquivoSaida.open("texto.txt", ios_base::app);

    arquivoSaida << "Funcionou";
    arquivoSaida.close();

    return 0;
}
