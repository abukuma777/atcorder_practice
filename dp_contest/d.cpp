#include <bits/stdc++.h>
using namespace std;

// 最大の更新
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
    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    // 動的計画法

    return 0;
}
