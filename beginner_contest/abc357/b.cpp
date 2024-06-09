#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper_count = 0;
    int lower_count = 0;

    // 大文字と小文字の数を数える
    for (char c : s)
    {
        if (isupper(c))
        {
            upper_count++;
        }
        else if (islower(c))
        {
            lower_count++;
        }
    }

    // 大文字の数が多い場合、小文字を大文字に変換
    if (upper_count > lower_count)
    {
        // &は,参照
        // 参照を用いることで元の文字列に対して変更できる
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    // それ以外の場合、大文字を小文字に変換
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    // 変換後の文字列を出力
    cout << s << endl;

    return 0;
}
