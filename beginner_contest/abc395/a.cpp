#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // 配列の要素前後をループで確認していく
    for (int i = 1; i < N; i++)
    {
        if (A[i - 1] >= A[i]) // 直前の要素より小さいか等しい場合は No
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
