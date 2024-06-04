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
    for (int bit = 0; bit < (1 << N); bit++) // bit は 0 から 7 までの値を取る
    {
        int sum = 0;
        for (int i = 0; i < N; i++) // N=3 なので、i は 0 から 2 までの値を取る
        {
            if (bit & (1 << i)) // bit の i 番目のビットが 1 ならば
            {
                sum += A[i]; // sum に A[i] を加える
            }
        }
        if (sum == S) // 合計が S に一致するかをチェック
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
