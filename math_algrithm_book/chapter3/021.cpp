#include <iostream>
using namespace std;

// 階乗を計算する関数
long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n, r;
    cin >> n >> r;

    // nCr を計算する
    long long result = factorial(n) / (factorial(r) * factorial(n - r));
    cout << result << endl;

    return 0;
}
