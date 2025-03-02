#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 初期状態のグリッドを '?' で埋める
    // 要素Nの?をN行作成する(N*Nの配列)
    vector<string> grid(N, string(N, '?'));

    // iは左上の行数を定義
    for (int i = 1; i <= N; i++)
    {
        // jは右下を求める
        int j = N + 1 - i; // j の計算
        if (i > j)
            break; // i > j の場合は何もしない

        // 条件式 ? 条件が真のときの値 : 条件が偽のときの値;
        char color = (i % 2 == 1) ? '#' : '.'; // 奇数なら黒, 偶数なら白

        // (i, i) から (j, j) までを color で埋める
        for (int r = i - 1; r <= j - 1; r++)
        {
            for (int c = i - 1; c <= j - 1; c++)
            {
                grid[r][c] = color;
            }
        }
    }

    // 結果を出力
    for (int i = 0; i < N; i++)
    {
        cout << grid[i] << endl;
    }

    return 0;
}
