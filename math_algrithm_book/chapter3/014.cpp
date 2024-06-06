#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// エラトステネスの篩を使って sqrt(N) 以下の素数を求める関数
vector<long long> sieve_of_eratosthenes(long long N)
{
    // N の平方根の整数部分 + 1 までの範囲で素数を求める
    long long limit = static_cast<long long>(sqrt(N)) + 1;
    // limit + 1 個の要素を持つ配列を true で初期化する
    vector<bool> is_prime(limit, true);
    // 0 と 1 は素数ではない
    is_prime[0] = is_prime[1] = false;

    // 2 から limit までの各数について素数判定を行う
    for (long long i = 2; i * i <= N; ++i)
    {
        // i が素数の場合、その倍数を全て素数でないとマークする
        if (is_prime[i])
        {
            for (long long j = i * i; j < limit; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    // 素数を格納するためのベクトル
    vector<long long> primes;
    // is_prime 配列をチェックし、素数のインデックスを primes ベクトルに追加する
    for (long long i = 2; i < limit; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    long long N;
    cin >> N;

    // sqrt(N) 以下の素数を求める
    vector<long long> primes = sieve_of_eratosthenes(N);

    // 求めた素数を使って N の素因数分解を行う
    for (long long prime : primes)
    {
        // prime で割り切れる限り N を割り、素因数として出力する
        while (N % prime == 0)
        {
            cout << prime << " ";
            N /= prime;
        }
    }

    // 最後に残った N が 1 より大きければ、それも素因数として出力する
    if (N > 1)
    {
        cout << N << " ";
    }

    cout << endl;
    return 0;
}
