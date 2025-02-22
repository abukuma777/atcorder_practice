#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string result;
    for (char c : S) // Sの各文字をcに格納してループ
    {
        if (c == '2')    // '2' なら
            result += c; // resultに追加
    }

    cout << result << endl;
    return 0;
}
