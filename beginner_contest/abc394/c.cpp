#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // スタックとして使う可変長配列
    // （末尾を top とみなし、必要なときに末尾２文字を確認・置換）
    vector<char> st;

    // 右から左に走査
    for (int i = (int)S.size() - 1; i >= 0; i--)
    {
        // 1文字積む
        st.push_back(S[i]);

        // 末尾が 'A','W' (＝"AW") なら "CA" に置き換え
        while (st.size() >= 2)
        {
            int n = st.size(); // スタックのサイズを取得
            // st[n-2], st[n-1] が 'A','W' なら
            if (st[n - 2] == 'A' && st[n - 1] == 'W')
            {
                // 2文字削除
                st.pop_back();
                st.pop_back();
                // "C","A" を追加
                st.push_back('C');
                st.push_back('A');
            }
            else
            {
                // それ以外なら置き換えは起こらないので抜ける
                break;
            }
        }
    }

    // スタックを反転すると結果文字列になる
    reverse(st.begin(), st.end());

    // 出力
    for (char c : st)
    {
        cout << c;
    }
    cout << endl;

    return 0;
}
