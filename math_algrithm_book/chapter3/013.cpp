#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N; // 素数判定する整数N
    cin >> N;

    for (long long i = 1; i * i <= N; i++)
    {
        if (N % i != 0)
            continue;
        cout << i << endl;
        // iで割り切れたもう一つの値
        if (i != N / i)
        {
            cout << N / i << endl;
        }
    }

    return 0;
}
