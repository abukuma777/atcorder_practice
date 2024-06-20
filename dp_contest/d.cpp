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
    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    // DPテーブル
    vector<long long> dp(W + 1, 0);

    // 各アイテムについて
    for (int i = 0; i < N; i++)
    {
        // 重量を逆順にして更新

        for (int j = W; j >= w[i]; j--)
        {
            // メモ結果とdp[j - w[i]] + v[i]という選んだ結果を比較
            chmax(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    // 最大値を出力
    cout << *max_element(dp.begin(), dp.end()) << endl;
    return 0;
}
