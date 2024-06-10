#include <bits/stdc++.h>
using namespace std;

// レベルNのカーペットを生成する関数
void generateCarpet(int N, int x, int y, vector<vector<char>> &carpet)
{
    if (N == 0)
    {
        carpet[x][y] = '#';
        return;
    }

    int sub_size = pow(3, N - 1);

    // 3x3の各ブロックに対して処理
    // まず，対象カーペットに#を入れて，そのあとに.を追加する
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

    int size = pow(3, N); // 3^N のサイズを計算

    // size * sizeのベクトルを作成
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
