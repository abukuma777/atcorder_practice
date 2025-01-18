#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    // ヘビを格納する配列 (または vector) を用意
    // pos[i]  : i 番目に追加されたヘビの「追加時の絶対頭座標」
    // length[i]: i 番目に追加されたヘビの「長さ」
    vector<long long> pos(Q), length(Q);

    // キューの「先頭」(front_idx) と「末尾の次」(back_idx)
    int front_idx = 0, back_idx = 0;

    // これまでに抜けたヘビの長さの合計 (シフト用)
    long long acc = 0;

    while (Q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            // クエリタイプ 1: "1 l"
            long long l;
            cin >> l;

            if (front_idx == back_idx)
            {
                // キューが空の場合は座標 0
                pos[back_idx] = 0;
            }
            else
            {
                // それまでの「末尾ヘビの座標」 + 「末尾ヘビの長さ」
                // = pos[back_idx - 1] + length[back_idx - 1]
                pos[back_idx] = pos[back_idx - 1] + length[back_idx - 1];
            }
            length[back_idx] = l;
            back_idx++;
        }
        else if (t == 2)
        {
            // クエリタイプ 2: "2"
            // 先頭のヘビを抜き，そのヘビの長さ分だけ acc を増やす
            acc += length[front_idx];
            front_idx++;
        }
        else
        {
            // クエリタイプ 3: "3 k"
            // 先頭から数えて k 番目のヘビの現在の座標 = (追加時の絶対座標) - acc
            long long k;
            cin >> k;
            int idx = front_idx + (k - 1);
            cout << pos[idx] - acc << "\n";
        }
    }

    return 0;
}
