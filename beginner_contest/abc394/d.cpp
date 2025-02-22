#include <bits/stdc++.h>
using namespace std;

// 括弧が対応しているかチェックする補助関数
bool matching(char openC, char closeC)
{
    if (openC == '(' && closeC == ')')
        return true;
    if (openC == '[' && closeC == ']')
        return true;
    if (openC == '<' && closeC == '>')
        return true;
    return false;
}

int main()
{
    string S;
    cin >> S;

    stack<char> st;
    for (char c : S)
    {
        // 開き括弧ならスタックに積む
        if (c == '(' || c == '[' || c == '<')
        {
            st.push(c);
        }
        // 閉じ括弧なら対応する開き括弧をチェック
        else
        {
            // スタックが空 = 対応する開き括弧なし → NG
            // 直前に開きかっこがなくて，空のとき
            if (st.empty())
            {
                cout << "No\n";
                return 0;
            }
            // 対応する開き括弧かどうか
            // 直前に対応する開きかっこがあるか確認する
            char top = st.top();
            if (!matching(top, c))
            {
                cout << "No\n";
                return 0;
            }
            // 合っていれば取り除く
            st.pop();
        }
    }

    // 最後にスタックが空ならOK
    if (st.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
