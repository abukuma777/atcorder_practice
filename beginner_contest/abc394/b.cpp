#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    // 文字列の長さでソート
    sort(S.begin(), S.end(), [](const string &a, const string &b)
         { return a.size() < b.size(); });

    // すべて連結して出力
    string result;
    for (const string &s : S)
    {
        result += s;
    }

    cout << result << endl;
    return 0;
}
