#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    unordered_map<int, int> last_index; // 値 → 最後に登場したインデックス
    int min_length = INT_MAX;           // 最小の差分
    bool found = false;

    for (int i = 0; i < N; i++)
    {
        // .count(key)で，keyが存在するなら1, 存在しないときは0を返す
        if (last_index.count(A[i]))
        { // すでに登場した値なら
            // prev = previous(前の)
            int prev_index = last_index[A[i]];
            min_length = min(min_length, i - prev_index + 1);
            found = true;
        }
        last_index[A[i]] = i; // 最新のインデックスを記録
    }

    if (found)
    {
        cout << min_length << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
