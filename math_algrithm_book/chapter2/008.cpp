#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S, cnt = 0;
    cin >> N >> S;
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            if (i + j <= S)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
