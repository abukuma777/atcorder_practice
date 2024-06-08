#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

// 繰り返し二乗法を用いて (base^exp) % mod を計算する関数
long long mod_pow(long long base, long long exp, long long mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main()
{
    long long N;
    cin >> N;

    // N の桁数を計算
    long long digit = 0;
    long long temp = N;
    while (temp > 0)
    {
        temp /= 10;
        digit++;
    }

    // 等比数列の和の計算
    long long ten_power_d = mod_pow(10, digit, MOD);
    long long sum_geometric = (mod_pow(ten_power_d, N, MOD) - 1 + MOD) % MOD;
    sum_geometric = (sum_geometric * mod_pow(ten_power_d - 1, MOD - 2, MOD)) % MOD;

    // 最終的な結果の計算
    long long result = (N % MOD) * sum_geometric % MOD;

    cout << result << endl;

    return 0;
}
