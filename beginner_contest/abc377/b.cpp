#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ステップ1: 入力の読み込み
    // 8行の文字列を格納するベクターSを用意し、各行の状態を読み込む
    vector<string> S(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> S[i];
    }

    // ステップ2: 行と列のコマの有無を記録するための配列を準備
    // rowHasPiece[i]はi行に、colHasPiece[j]はj列にコマがあるかどうかを示す
    vector<bool> rowHasPiece(8, false), colHasPiece(8, false);

    // ステップ3: 各マスを調べ、コマがある行と列を記録
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (S[i][j] == '#')
            {                          // コマがある場合
                rowHasPiece[i] = true; // i行にコマがあると記録
                colHasPiece[j] = true; // j列にコマがあると記録
            }
        }
    }

    // ステップ4: コマが置かれていない行と列を数える
    int emptyRows = 0, emptyCols = 0;
    for (int i = 0; i < 8; i++)
    {
        if (!rowHasPiece[i])
            emptyRows++; // コマがない行をカウント
        if (!colHasPiece[i])
            emptyCols++; // コマがない列をカウント
    }

    // ステップ5: 結果の計算と出力
    // コマが置かれていない行と列の交差する空マスの数を計算
    cout << emptyRows * emptyCols << endl;

    return 0;
}
