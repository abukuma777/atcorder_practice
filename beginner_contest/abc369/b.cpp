#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, position;
    char hand;
    vector<int> left, right;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        // 例: 手の入力と位置の入力
        cin >> position >> hand;

        if (hand == 'L')
        {
            // handが 'L' の場合、left ベクターに position を追加
            left.push_back(position);
        }
        else if (hand == 'R')
        {
            // handが 'R' の場合、right ベクターに position を追加
            right.push_back(position);
        }
    }

    // 左ベクターの隣り合う要素の差の和を求める
    int sum_left = 0;
    for (size_t i = 1; i < left.size(); ++i)
    {
        sum_left += abs(left[i] - left[i - 1]); // 隣り合う要素の差を絶対値で加算
    }

    // 右ベクターの隣り合う要素の差の和を求める
    int sum_right = 0;
    for (size_t i = 1; i < right.size(); ++i)
    {
        sum_right += abs(right[i] - right[i - 1]); // 隣り合う要素の差を絶対値で加算
    }

    cout << sum_left + sum_right << endl;

    return 0;
}
