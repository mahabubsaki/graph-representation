#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 5;
    int matrix[nodes][nodes];
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
