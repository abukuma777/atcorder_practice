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
    vector<int> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    // 動的計画法
    vector<int> dp(N, INT_MAX); // intの最大値を初期値
    dp[0] = 0;

    for (int i = 1; i < N; i++)
    {
        if (i - 1 >= 0)
        {
            chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        }
        if (i - 2 >= 0)
        {
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    // output
    cout << dp[N - 1] << endl;

    return 0;
}
