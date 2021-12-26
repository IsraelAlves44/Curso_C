#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
    std::string palavra;

    printf("Digite uma palavra: \n");

    cin >> palavra;
    cout << ("A palavra eh: ") << palavra << ("\n");
    system("pause");

    return 0;
}
