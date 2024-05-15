#include <bits/stdc++.h>
using namespace std;

// カスタムコンパレータ
bool compareBySecondDescending(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second; // ペアの2番目の要素を比較（降順）
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> pairs(N);

    for (int i = 0; i < N; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }
    // ペアを b_i の値で降順にソート
    sort(pairs.begin(), pairs.end(), compareBySecondDescending);

    for (const auto &p : pairs)
    {
        cout << p.first << " " << p.second << endl;
    }
}
