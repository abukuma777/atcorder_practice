#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, Si, Sj;
    cin >> H >> W >> Si >> Sj;
    vector<string> grid(H);
    for (int i = 0; i < H; ++i)
    {
        cin >> grid[i];
    }
    string X;
    cin >> X;

    // 初期位置の調整 (1-indexed -> 0-indexed)
    Si--;
    Sj--;

    // 各方向への移動ベクトル
    int dx[] = {0, 0, -1, 1}; // L, R, U, D
    int dy[] = {-1, 1, 0, 0}; // L, R, U, D
    map<char, int> dir_map = {{'L', 0}, {'R', 1}, {'U', 2}, {'D', 3}};

    // 高橋君の移動処理
    for (char move : X)
    {
        int dir = dir_map[move];
        int new_x = Si + dx[dir];
        int new_y = Sj + dy[dir];

        // 新しい位置がグリッドの範囲内かつ空きマスであるかを確認
        if (new_x >= 0 && new_x < H && new_y >= 0 && new_y < W && grid[new_x][new_y] == '.')
        {
            Si = new_x;
            Sj = new_y;
        }
    }

    // 最終位置を出力 (0-indexed -> 1-indexedに調整)
    cout << Si + 1 << " " << Sj + 1 << endl;
    return 0;
}
