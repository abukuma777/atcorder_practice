#include <bits/stdc++.h>
using namespace std;

// レベルNのカーペットを生成する関数
void generateCarpet(int N, int x, int y, vector<vector<char>> &carpet)
{
    // 基本ケース：レベル0のカーペットは1x1の黒いマス
    if (N == 0)
    {
        carpet[x][y] = '#';
        return;
    }

    int size = 1;
    for (int i = 0; i < N; ++i)
    {
        size *= 3; // 3^N のサイズを計算
    }

    int sub_size = size / 3;

    // 3x3の各ブロックに対して処理
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (i == 1 && j == 1)
            {
                // 中央のブロックを白で塗る
                for (int dx = 0; dx < sub_size; ++dx)
                {
                    for (int dy = 0; dy < sub_size; ++dy)
                    {
                        carpet[x + i * sub_size + dx][y + j * sub_size + dy] = '.';
                    }
                }
            }
            else
            {
                // 他のブロックに対して再帰的にレベル(N-1)のカーペットを生成
                generateCarpet(N - 1, x + i * sub_size, y + j * sub_size, carpet);
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    int size = 1;
    for (int i = 0; i < N; ++i)
    {
        size *= 3; // 3^N のサイズを計算
    }

    vector<vector<char>> carpet(size, vector<char>(size, '.'));

    generateCarpet(N, 0, 0, carpet);

    // カーペットを出力
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << carpet[i][j];
        }
        cout << endl;
    }

    return 0;
}
