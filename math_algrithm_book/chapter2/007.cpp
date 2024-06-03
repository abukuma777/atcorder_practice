#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, Y, cnt = 0;
    cin >> N >> X >> Y;
    for (int i = 1; i < N + 1; i++)
    {
        if ((i % X == 0) | (i % Y == 0))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
