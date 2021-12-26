#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    int i, j;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    system("pause");
}
