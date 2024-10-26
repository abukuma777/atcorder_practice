#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> L(N), R(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> L[i] >> R[i];
    }

    // 条件を満たさない区間を管理する配列
    vector<int> invalid_range(M + 2, 0);

    // 各区間 [L_i, R_i] に対して、(l, r) が条件を満たさない範囲をマーク
    for (int i = 0; i < N; ++i)
    {
        invalid_range[L[i]]++;
        if (R[i] + 1 <= M)
            invalid_range[R[i] + 1]--;
    }

    // 累積和で無効な範囲を求める
    vector<int> covered(M + 1, 0);
    for (int i = 1; i <= M; ++i)
    {
        covered[i] = covered[i - 1] + invalid_range[i];
    }

    // 条件を満たす (l, r) のペアをカウント
    long long result = 0;
    for (int l = 1; l <= M; ++l)
    {
        for (int r = l; r <= M; ++r)
        {
            if (covered[r] == 0)
            { // 条件を満たす場合のみカウント
                result++;
            }
            else
            {
                break; // カバーされている場合は次の l へ
            }
        }
    }

    cout << result << endl;
    return 0;
}
