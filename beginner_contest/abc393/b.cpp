#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 0;
    int n = S.size();

    for (int i = 0; i < n; i++)
    {
        if (S[i] != 'A')
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (S[j] != 'B')
                continue;
            int k = 2 * j - i; // 等間隔の位置を計算
            if (k < n && S[k] == 'C')
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
