#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;

    vector<int> weights(N);
    vector<int> values(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> weights[i] >> values[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    // DPテーブルの更新
    for (int i = 1; i <= N; ++i)
    {
        for (int w = 0; w <= W; ++w)
        {
            if (w >= weights[i - 1])
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // 結果を出力
    cout << dp[N][W] << endl;

    return 0;
}
