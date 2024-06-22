#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// 最大の更新
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

// 最小の更新
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

// 部分文字列が回文かどうかを確認する関数
bool is_palindrome(const string &s, int k)
{
    for (int i = 0; i < k / 2; ++i)
    {
        if (s[i] != s[k - 1 - i])
        {
            return false;
        }
    }
    return true;
}

// 良い文字列の数をカウントする関数
int count_good_strings(int n, int k, const string &s)
{
    vector<vector<int>> dp(n + 1, vector<int>(1 << k, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; ++i)
    {
        for (int mask = 0; mask < (1 << k); ++mask)
        {
            if (dp[i][mask] == 0)
                continue;
            for (char c : {'A', 'B'})
            {
                int new_mask = ((mask << 1) & ((1 << k) - 1)) | (c == 'B');
                if (s[i] == '?' || s[i] == c)
                {
                    string temp;
                    for (int j = 0; j < k; ++j)
                    {
                        temp += (new_mask & (1 << j)) ? 'B' : 'A';
                    }
                    if (i + 1 >= k && is_palindrome(temp, k))
                        continue;
                    dp[i + 1][new_mask] = (dp[i + 1][new_mask] + dp[i][mask]) % MOD;
                }
            }
        }
    }

    int result = 0;
    for (int mask = 0; mask < (1 << k); ++mask)
    {
        result = (result + dp[n][mask]) % MOD;
    }
    return result;
}

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    cout << count_good_strings(n, k, s) << endl;

    return 0;
}
