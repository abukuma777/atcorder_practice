#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    // 割り切れるまで，ユークリッドの互除法を繰り返す
    while (a >= 1 && b >= 1)
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
    if (a >= 1)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << GCD(a, b) << endl;

    return 0;
}
