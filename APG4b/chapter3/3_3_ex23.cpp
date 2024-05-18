#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. 入力読み込み
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    // 2. 出現回数のカウント
    unordered_map<int, int> countMap;
    for (int num : A)
    {
        countMap[num]++;
    }

    // 3. 最も多く出現する要素の特定
    int maxValue = 0;
    int maxCount = 0;
    // constで定数の値が変更されない
    for (const auto &entry : countMap)
    {
        if (entry.second > maxCount)
        {
            maxCount = entry.second;
            maxValue = entry.first;
        }
    }

    // 出力
    cout << maxValue << " " << maxCount << endl;
}
