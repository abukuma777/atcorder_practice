#include <bits/stdc++.h>
using namespace std;

// カスタムコンパレータ
bool compareRestaurants(const tuple<string, int, int> &a, const tuple<string, int, int> &b)
{
    if (get<0>(a) == get<0>(b))
    {
        // falseの時に，pair同士の並び替えを行う
        return get<1>(a) > get<1>(b); // 同じ市なら点数の高い順
    }
    return get<0>(a) < get<0>(b); // 市名が辞書順
}

int main()
{
    int N;
    cin >> N;

    // レストラン情報をタプルで保存 (市名, 点数, インデックス)
    // 結局，並び替えすると元インデックスがわからなくなるから，そのために保持
    vector<tuple<string, int, int>> restaurants(N);

    for (int i = 0; i < N; i++)
    {
        string city;
        int score;
        cin >> city >> score;
        restaurants[i] = make_tuple(city, score, i + 1);
    }

    // レストランをソート
    sort(restaurants.begin(), restaurants.end(), compareRestaurants);

    // ソートされた順にインデックスを出力
    for (const auto &restaurant : restaurants)
    {
        cout << get<2>(restaurant) << endl;
    }

    return 0;
}
