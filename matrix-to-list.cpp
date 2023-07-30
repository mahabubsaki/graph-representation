#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{0, 1, 0, 0, 1}, {1, 0, 1, 1, 0}, {0, 1, 0, 0, 0}, {0, 1, 0, 0, 0}, {1, 0, 0, 0, 0}};
    vector<list<int>> myList(matrix.size());
    for (int i = 0; i < matrix.size(); i++)
    {
        cout << i + 1 << " -> ";
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
            if (matrix[i][j] == 1)
            {
                myList[i].push_back(j);
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < myList.size(); i++)
    {
        cout << i + 1 << " -> ";
        for (int neighbor : myList[i])
        {
            cout << neighbor + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}