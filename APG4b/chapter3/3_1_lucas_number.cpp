#include <bits/stdc++.h>
using namespace std;

int64_t lucas(int n)
{
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;

    vector<int64_t> lucasNumbers(n + 1);
    lucasNumbers[0] = 2;
    lucasNumbers[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        lucasNumbers[i] = lucasNumbers[i - 1] + lucasNumbers[i - 2];
    }

    return lucasNumbers[n];
}

int main()
{
    int N;
    cin >> N;
    cout << lucas(N) << endl;
    return 0;
}
