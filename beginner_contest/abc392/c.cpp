#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> P(N + 1), Q(N + 1), pos(N + 1), S(N + 1);

    // 入力を受け取る
    for (int i = 1; i <= N; i++)
    {
        cin >> P[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cin >> Q[i];
        pos[Q[i]] = i; // ゼッケン番号 Q[i] をつけているのは人番号 i
    }

    // 答えを求める
    for (int i = 1; i <= N; i++)
    {
        S[i] = Q[P[pos[i]]]; // ゼッケン番号 i の人が見ている相手のゼッケン番号
    }

    // 出力
    for (int i = 1; i <= N; i++)
    {
        cout << S[i] << " ";
    }
    cout << endl;

    return 0;
}
