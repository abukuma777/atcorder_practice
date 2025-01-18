#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 入力される整数 X を格納
    // X は N! (N の階乗) の値であり、この X を満たす N を求める
    long long X;
    cin >> X;

    // 階乗計算に使用する変数
    long long factorial = 1; // 階乗を計算するための変数（初期値は 1! = 1）
    int N = 1;               // 現在の N を表す変数（初期値は 1）

    // 階乗を計算しながら、X と一致する N を探す
    // X は N! の形をしていることが保証されているので、必ず一致する N が見つかる
    while (factorial < X)
    {
        N++;            // N を 1 増やす
        factorial *= N; // 階乗を更新 (例: N=2 のとき factorial=1*2, N=3 のとき factorial=2*3)
    }

    // ループを抜けた時点で factorial == X なので、N を出力する
    cout << N << endl;

    return 0;
}
