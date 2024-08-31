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

    // dp
    vector<int> dp(N + 1, INT_MIN);

    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        // １段前から飛ぶとき
        chmax(dp[i], dp[i - 1] + dp[i - 2]);
    }

    // output
    cout << dp[N] << endl;
    return 0;
}
