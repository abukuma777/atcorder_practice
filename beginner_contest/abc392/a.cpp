#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }

    // 配列の並べ替えを試す
    sort(A.begin(), A.end());
    do
    {
        if (A[0] * A[1] == A[2])
        {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(A.begin(), A.end()));

    // すべての組み合わせで失敗したらNoを出力
    cout << "No" << endl;
    return 0;
}
