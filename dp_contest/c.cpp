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
    // 入力の受け取り
    int N; // 日数
    cin >> N;
    vector<int> a(N), b(N), c(N); // 各日の活動ごとの幸福度
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    // 動的計画法のための配列
    // dp[i][j]はi日目に活動jを選んだ場合の最大幸福度を記録
    vector<vector<int>> dp(N, vector<int>(3, 0));

    // 初日の設定
    dp[0][0] = a[0]; // 活動A
    dp[0][1] = b[0]; // 活動B
    dp[0][2] = c[0]; // 活動C

    // DPの計算
    for (int i = 1; i < N; i++)
    {
        // 活動Aを選ぶ場合
        chmax(dp[i][0], dp[i - 1][1] + a[i]); // 直前に活動Bを選び、その後活動Aを選ぶ
        chmax(dp[i][0], dp[i - 1][2] + a[i]); // 直前に活動Cを選び、その後活動Aを選ぶ

        // 活動Bを選ぶ場合
        chmax(dp[i][1], dp[i - 1][0] + b[i]); // 直前に活動Aを選び、その後活動Bを選ぶ
        chmax(dp[i][1], dp[i - 1][2] + b[i]); // 直前に活動Cを選び、その後活動Bを選ぶ

        // 活動Cを選ぶ場合
        chmax(dp[i][2], dp[i - 1][0] + c[i]); // 直前に活動Aを選び、その後活動Cを選ぶ
        chmax(dp[i][2], dp[i - 1][1] + c[i]); // 直前に活動Bを選び、その後活動Cを選ぶ
    }

    // 最後の日の最大幸福度
    int result = max({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]});

    // 結果の出力
    cout << result << endl;

    return 0;
}
