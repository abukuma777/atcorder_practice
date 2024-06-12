#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int h[N + 1], dp[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> h[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
            dp[i] = 0;
        else if (i == 2)
            dp[i] = abs(h[i] - h[i - 1]);
        else
        {
            // ２通りで小さいほうを選ぶ
            dp[i] = min(dp[i - 2] + abs(h[i] - h[i - 2]), dp[i - 1] + abs(h[i] - h[i - 1]));
        }
    }

    // output
    cout << dp[N] << endl;

    return 0;
}
