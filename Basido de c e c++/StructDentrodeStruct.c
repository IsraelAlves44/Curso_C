#include <stdio.h>
#include <stdlib.h>

typedef struct Data
{
    int id;
    int dia;
    int mes;
    int ano;
} Data;

struct Aluno
{
    int id;
    Data nascimento;
};

int main(int argc, char const *argv[])
{
    struct Aluno aluno1;

    aluno1.id = 15;
    aluno1.nascimento.dia = 4;
    aluno1.nascimento.mes = 5;
    aluno1.nascimento.ano = 1995;

    printf("nascido no dia %d do %d do ano de %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
}
