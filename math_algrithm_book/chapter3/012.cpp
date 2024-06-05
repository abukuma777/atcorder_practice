#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long N)
{
    if (N <= 1)
        return false;
    if (N == 2)
        return true; // 2は素数
    if (N % 2 == 0)
        return false; // 2以外の偶数は素数ではない

    long long limit = static_cast<long long>(sqrt(N));

    // ループで，sqrt(N)以下かつ，奇数のみを調べる
    for (long long i = 3; i <= limit; i += 2)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long N; // 素数判定する整数N
    cin >> N;

    // 出力
    if (isPrime(N))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
