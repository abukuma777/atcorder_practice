#include <bits/stdc++.h>
using namespace std;

// 最大の更新
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
// 最小の更新
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

int main()
{
    // input
    int N;
    cin >> N;
    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    // 動的計画法
    // N行3列のベクトル
    vector<vector<int>> dp(N, vector<int>(3, 0));

    // 初期値の設定
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    // DPの計算
    for (int i = 1; i < N; i++)
    {
        chmax(dp[i][0], dp[i - 1][1] + a[i]);
        chmax(dp[i][0], dp[i - 1][2] + a[i]);
        chmax(dp[i][1], dp[i - 1][0] + b[i]);
        chmax(dp[i][1], dp[i - 1][2] + b[i]);
        chmax(dp[i][2], dp[i - 1][0] + c[i]);
        chmax(dp[i][2], dp[i - 1][1] + c[i]);
    }

    // 最後の日の最大幸福度
    int result = max({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]});

    // output
    cout << result << endl;

    return 0;
}
