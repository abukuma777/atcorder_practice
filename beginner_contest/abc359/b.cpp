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

    int cnt = 0;
    // 各位置iに対して間に1人いるかを確認
    for (int i = 0; i < 2 * N - 2; i++)
    {
        if (A[i] == A[i + 2])
        {
            cnt++;
        }
    }

    // 結果を出力
    cout << cnt << endl;
    return 0;
}
