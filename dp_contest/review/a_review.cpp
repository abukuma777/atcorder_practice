#include <bits/stdc++.h>
using namespace std;

// 最小値を更新する関数
// aがbより大きい場合にaをbに更新し、trueを返す
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
    // 入力の受け取り
    int N; // 石の数
    cin >> N;
    vector<int> h(N); // 各石の高さ
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    // 動的計画法のための配列
    vector<int> dp(N, INT_MAX); // 各石に到達するまでの最小コスト
    dp[0] = 0;                  // 初期条件：最初の石に到達するコストは0

    // 各石への最小コストを計算
    for (int i = 1; i < N; i++)
    {
        // 1つ前の石からジャンプする場合
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));

        // 2つ前の石からジャンプする場合
        if (i > 1) // 範囲外アクセス防止のために明示的なチェック
        {
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    // 結果の出力
    cout << dp.back() << endl;

    return 0;
}
