#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // ここにプログラムを追記
    int cnt = 0;

    for (int i = 0; i < static_cast<int>(S.size()); i++)
    {
        if (S.at(i) == '+')
        {
            cnt++;
        }
        else if (S.at(i) == '-')
        {
            cnt--;
        }
    }

    cout << cnt + 1 << endl;
}
