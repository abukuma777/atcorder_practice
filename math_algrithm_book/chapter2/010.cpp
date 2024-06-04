#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, result = 1;
    cin >> N;

    for (long long i = 1; i <= N; i++)
    {
        result *= i;
    }

    cout << result << endl;
    return 0;
}
