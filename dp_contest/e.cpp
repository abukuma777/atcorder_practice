#include <bits/stdc++.h>
using namespace std;

// 最大値を更新する関数
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

// 最小値を更新する関数
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
// 極限(めっちゃデカい値)を定義
const long long INF = LLONG_MAX;

// 今回， 重量ベースのDPテーブルではなく、価値ベースのDPテーブルを使用することで、メモリ使用量を削減
//  価値に基づく更新を行うことで、最小の重さを効率的に計算し、最終的な結果を求める

int main()
{
    // 入力を受け取る
    int N;
    long long W;
    cin >> N >> W;
    vector<long long> w(N), v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    // 価値の合計の最大値を求める
    // 初期値をlong long型0と定義
    long long V = accumulate(v.begin(), v.end(), 0LL);

    // DPテーブルを初期化
    vector<long long> dp(V + 1, INF);
    dp[0] = 0;

    // TODO: 以下を見直す

    // DPテーブルを更新
    for (int i = 0; i < N; i++)
    {
        for (long long j = V; j >= v[i]; j--)
        {
            chmin(dp[j], dp[j - v[i]] + w[i]);
        }
    }

    // 結果を出力
    long long result = 0;
    for (long long j = 0; j <= V; j++)
    {
        if (dp[j] <= W)
        {
            chmax(result, j);
        }
    }

    cout << result << endl;

    return 0;
}
