#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> result(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++)
    {
        int win_p = A.at(i) - 1;
        int lose_p = B.at(i) - 1;

        result.at(win_p).at(lose_p) = 'o';
        result.at(lose_p).at(win_p) = 'x';
    }

    // 出力部分は，１つずつ行う
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << result.at(i).at(j);
            if (j == N - 1)
            {
                cout << endl; // 行末なら改行
            }
            else
            {
                cout << " "; // 行末でないなら空白を出力
            }
        }
    }
}
