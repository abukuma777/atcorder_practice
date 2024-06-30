#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int index_R, index_M, index_S;

    for (int i = 0; i < 3; i++)
    {
        if (S[i] == 'R')
            index_R = i;
        if (S[i] == 'M')
            index_M = i;
        if (S[i] == 'S')
            index_S = i;
    }
    // output
    if (index_R < index_M)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
