#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    long long X, Y;
    cin >> N >> X >> Y;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    vector<long long> dp_sweet(N + 1, 0), dp_salty(N + 1, 0);
    for (int i = 0; i < N; ++i)
    {
        for (int j = N; j >= 1; --j)
        {
            if (dp_sweet[j - 1] + A[i] <= X && dp_salty[j - 1] + B[i] <= Y)
            {
                dp_sweet[j] = max(dp_sweet[j], dp_sweet[j - 1] + A[i]);
                dp_salty[j] = max(dp_salty[j], dp_salty[j - 1] + B[i]);
            }
        }
    }

    for (int j = 1; j <= N; ++j)
    {
        if (dp_sweet[j] > X || dp_salty[j] > Y)
        {
            cout << j << endl;
            return 0;
        }
    }

    cout << N << endl; // 全ての料理が条件を満たす場合
    return 0;
}
