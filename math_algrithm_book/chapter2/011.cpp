#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 2からNまでの整数を確認する
    for (int i = 2; i <= N; i++)
    {
        // 整数iを調査
        for (int j = 2; j <= i; j++)
        {
            // i==jになる前に割り切れるときにbreak
            if ((i % j == 0) & (i != j))
            {
                break;
            }
            else if (i == j)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
