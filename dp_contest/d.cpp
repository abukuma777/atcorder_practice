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

int main()
{
    // input
    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    // 動的計画法のテーブルを定義 (配列の初期化)
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    // DPテーブルを更新
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            // i番目のアイテムを選ばない場合
            chmax(dp[i + 1][j], dp[i][j]);

            // i番目のアイテムを選ぶ場合
            if (j + w[i] <= W)
            {
                chmax(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
            }
        }
    }

    // dp[N]の中で最大の値を探す
    long long max_value = *max_element(dp[N].begin(), dp[N].end());

    // 結果を出力
    cout << max_value << endl;

    return 0;
}
