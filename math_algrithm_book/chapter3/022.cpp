#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> array(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    unordered_map<int, int> count_map;
    long long answer = 0;

    for (int i = 0; i < N; i++)
    {
        int complement = 100000 - array[i]; // 補数を計算
        if (count_map.find(complement) != count_map.end())
        {                                    // 補数がハッシュマップに存在するかチェック
            answer += count_map[complement]; // 補数の出現回数を結果に加える
        }
        count_map[array[i]]++; // 現在の要素の出現回数をハッシュマップに更新
    }

    cout << answer << endl;
    return 0;
}
