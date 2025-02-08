#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    set<int> A; // 配列Aに含まれる要素を管理するセット
    for (int i = 0; i < M; i++)
    {
        int a;
        cin >> a;
        A.insert(a);
    }

    vector<int> result; // 存在しない整数を格納する配列
    for (int i = 1; i <= N; i++)
    {
        if (A.find(i) == A.end())
        { // セットに含まれていない整数を見つける
            result.push_back(i);
        }
    }

    // 出力
    cout << result.size() << endl;
    for (int x : result)
    {
        cout << x << " ";
    }
    if (!result.empty())
    {
        cout << endl;
    }

    return 0;
}
