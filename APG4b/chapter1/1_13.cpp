#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }

    // イテレータ範囲の合計値を求める
    int sum = accumulate(vec.begin(), vec.end(), 0);
    int avg = sum / N;

    for (int i = 0; i < N; i++)
    {
        int diff = abs(vec.at(i) - avg);
        cout << diff << endl;
    }
}
