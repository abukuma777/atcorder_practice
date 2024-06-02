#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    int a[N]; // 要素Nの配列

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        result += a[i];
    }

    cout << result % 100 << endl;
    return 0;
}
