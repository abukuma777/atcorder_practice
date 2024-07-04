#include <bits/stdc++.h>
using namespace std;

// 最大値を更新する関数
// aがbより小さい場合にaをbに更新し、trueを返す
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
    int N;
    cin >> N;
    vector<int> a(N), b(N), c(N);
    // 配列の最初使わない(コードの可読性のため)
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    // 動的計画法
    vector<vector<int>> dp(N, vector<int>(3, 0));
    // 初期値
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    for (int i = 1; i < N; i++)
    {
        // 前回aを選択した時
        chmax(dp[i][1], dp[i - 1][0] + b[i]); // 今回bを選択
        chmax(dp[i][2], dp[i - 1][0] + c[i]); // 今回cを選択
        // 前回bを選択した時
        chmax(dp[i][0], dp[i - 1][1] + a[i]); // 今回aを選択
        chmax(dp[i][2], dp[i - 1][1] + c[i]); // 今回cを選択
        // 前回cを選択した時
        chmax(dp[i][0], dp[i - 1][2] + a[i]); // 今回aを選択
        chmax(dp[i][1], dp[i - 1][2] + b[i]); // 今回bを選択
    }

    // index Nにおける最大値を探す
    int max_value = *max_element(dp[N - 1].begin(), dp[N - 1].end());

    // output
    cout << max_value << endl;
    return 0;
}
