#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<list<int>> myList;
    for (int i = 0; i < 5; ++i)
    {
        myList.push_back(list<int>());
    }

    myList[0].push_back(2);
    myList[0].push_back(5);
    myList[1].push_back(1);
    myList[1].push_back(3);
    myList[1].push_back(4);
    myList[2].push_back(2);
    myList[3].push_back(2);
    myList[4].push_back(1);
    vector<vector<int>> matrix(myList.size(), vector<int>(myList.size(), 0));

    for (int i = 0; i < myList.size(); i++)
    {
        for (int j : myList[i])
        {
            matrix[i][j - 1] = 1;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        cout << i + 1 << " -> ";
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}