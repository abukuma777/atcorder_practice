#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(2 * N);
    for (int i = 0; i < 2 * N; i++)
    {
        cin >> A[i];
    }

    // 色ごとの位置を保存するマップ
    unordered_map<int, vector<int>> color_positions;
    for (int i = 0; i < 2 * N; i++)
    {
        color_positions[A[i]].push_back(i);
    }

    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (color_positions[i][1] - color_positions[i][0] == 2)
        {
            count++;
        }
    }

    // 結果を出力
    cout << count << endl;
    return 0;
}
