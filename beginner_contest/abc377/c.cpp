#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ステップ1: 入力の読み込み
    // Nは盤面のサイズ、Mはコマの数
    long long N;
    int M;
    cin >> N >> M;

    // ステップ2: コマと取られる範囲を管理するための集合を準備
    // コマが置かれているマスの位置を記録する集合
    set<pair<long long, long long>> pieces;
    // 取られる範囲のマスを記録する集合
    set<pair<long long, long long>> attacked;

    // ステップ3: コマの位置情報の読み込み
    // 各コマの位置を読み込み、piecesに格納
    for (int i = 0; i < M; i++)
    {
        long long a, b;
        cin >> a >> b;
        pieces.insert({a, b});
    }

    // ステップ4: ナイトの動きのパターンを準備
    // ナイトの8方向の移動を表すベクトルを定義
    vector<pair<int, int>> moves = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

    // ステップ5: 各コマの位置からナイトの動きで取られるマスを計算
    for (auto [a, b] : pieces)
    {
        // コマが置かれている位置自体を取られる範囲に追加
        attacked.insert({a, b});

        // 8方向それぞれのナイトの動きで到達できるマスを計算
        for (auto [dx, dy] : moves)
        {
            long long new_x = a + dx;
            long long new_y = b + dy;
            // 到達したマスが範囲内 (1 <= x, y <= N) にあるか確認
            if (new_x >= 1 && new_x <= N && new_y >= 1 && new_y <= N)
            {
                attacked.insert({new_x, new_y}); // 範囲内なら取られる範囲に追加
            }
        }
    }

    // ステップ6: 安全なマス数の計算
    // 全体のマス数を計算
    long long total_cells = N * N;
    // 全体のマス数から取られる範囲のマス数を引いて安全なマス数を求める
    long long safe_cells = total_cells - attacked.size();

    // 結果を出力
    cout << safe_cells << endl;

    return 0;
}
