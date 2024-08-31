#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    set<int> valid_x; // 重複を避けるためにsetを使用

    // xの大きさに着目して実装

    // Pattern 1: A, B, x の順
    int x1 = 2 * B - A;
    valid_x.insert(x1); // 条件のチェックは不要

    // Pattern 2: A, x, B の順
    if ((A + B) % 2 == 0)
    { // xが整数であるかのチェック
        int x2 = (A + B) / 2;
        valid_x.insert(x2);
    }

    // Pattern 3: x, A, B の順
    int x3 = 2 * A - B;
    valid_x.insert(x3); // 条件のチェックは不要

    // 結果を出力
    cout << valid_x.size() << endl;

    return 0;
}
