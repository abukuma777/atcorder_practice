#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    bool found = false;

    // 全ての部分集合を試す
    for (int bit = 0; bit < (1 << N); bit++) // bitは0から2^N-1まで
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i)) // bitが1の要素だけを足す
                sum += A[i];
        }

        if (sum == S)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
