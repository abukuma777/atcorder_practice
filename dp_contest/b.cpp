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
    int N, K; // 石の数とジャンプの範囲
    cin >> N >> K;
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
        // i番目の石に対して，1〜Kステップ前の石からのジャンプを考慮
        for (int j = 1; j <= K; j++)
        {
            if (i - j >= 0) // 範囲外アクセス防止のためにチェック
            {
                chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
            }
        }
    }

    // 結果の出力
    cout << dp.back() << endl; // 最後の石への最小コストを出力

    return 0;
}
