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
    // input
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    // dp
    vector<int> dp(N, INT_MAX);

    dp[0] = 0;
    for (int i = 1; i < N; i++)
    {
        // １段前から飛ぶとき
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        // 2段前から飛ぶとき
        if (i - 2 >= 0)
        {
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    // output
    cout << dp[N - 1] << endl;
    return 0;
}
