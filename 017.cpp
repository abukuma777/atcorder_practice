#include <bits/stdc++.h>
using namespace std;

// long long 型に対応する GCD 関数
long long GCD(long long a, long long b)
{
    // 割り切れるまで，ユークリッドの互除法を繰り返す
    while (a != 0 && b != 0)
    {
        if (a < b)
        {
            b = b % a;
        }
        else
        {
            a = a % b;
        }
    }
    // 三項演算子である．a==0がtrueの時はb,falseの時はaをreturnする
    return (a == 0) ? b : a;
}

// GCDを用いてLCMを求める関数
long long LCM(long long a, long long b)
{
    // a*bでオーバーフローするリスクを避けるために先に計算
    return (a / GCD(a, b)) * b;
}

int main()
{
    int N;
    cin >> N;

    // long long の型の要素を持つ，要素数 N の vector を作成
    vector<long long> array(N);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    // 最大公約数計算
    long long gcd = array[0];
    for (int i = 1; i < N; i++)
    {
        gcd = GCD(gcd, array[i]);
    }

    // 最小公倍数計算
    long long lcm = array[0];
    for (int i = 1; i < N; i++)
    {
        lcm = LCM(lcm, array[i]);
    }

    cout << lcm << endl;

    return 0;
}
