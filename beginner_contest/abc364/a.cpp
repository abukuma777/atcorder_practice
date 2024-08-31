#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    bool flag = true;
    string s; // ここでsを宣言する

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            cin >> s;
        }
        else
        {
            string s_before = s; // 直前の文字列を保存
            cin >> s;
            // ２つ連続で甘い料理の場合
            if (s_before == "sweet" && s == "sweet")
            {
                // 最後に連続なら，完食できるから
                if (i != N - 1)
                    flag = false;
            }
        }
    }

    // output
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
