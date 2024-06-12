#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int N;
    cin >> N;
    int dp[N + 1];

    // 動的計画法
    for (int i = 0; i <= N; i++)
    {
        if (i <= 1)
            dp[i] = 1;
        else
            dp[i] = dp[i - 1] + dp[i - 2];
    }

    // output
    cout << dp[N] << endl;
    return 0;
}
