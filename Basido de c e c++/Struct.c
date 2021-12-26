#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct palavra
{
    int ordem;
    char letra;
    char texto[255];
};

int main()
{

    struct palavra primeiraPalavra;

    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'g';

    printf("%d\n", primeiraPalavra.ordem);
    printf("%c\n", primeiraPalavra.letra);

    // fazendo uma lista de structs

    struct palavra listadePalavra[5];
    strcpy(listadePalavra[0].texto, "String");
    printf("%s\n", listadePalavra[0].texto);

    return 0;
}
