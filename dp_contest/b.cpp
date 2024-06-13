#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int N, K;
    cin >> N >> K;
    vector<int> h(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> h[i];
    }
    // DP配列をLLONG_MAXで初期化
    vector<long long> dp(N + 1, LLONG_MAX);
    // 初期条件: 最初の足場にいるときはコスト0
    dp[1] = 0;

    // i=1はすでに定義済みのため，i=2から
    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (i - j >= 1)
            {
                dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
            }
        }
    }
    cout << dp[N] << endl;
    return 0;
}
