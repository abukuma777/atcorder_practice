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

    // 動的計画法
    // dp[j] は，重さが j 以下となるときの最大価値を記録
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < N; i++)
    {
        // 品物 i を選ぶ場合の逆順更新
        for (int j = W; j >= w[i]; j--)
        {
            chmax(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    // dp配列の中身を確認
    cout << "dp配列の中身:" << endl;
    for (int j = 0; j <= W; ++j)
    {
        cout << dp[j] << " ";
    }
    cout << endl;

    // 最後の行の最大値を求める
    int result = dp[W];
    // 結果の出力
    cout << result << endl;

    return 0;
}
