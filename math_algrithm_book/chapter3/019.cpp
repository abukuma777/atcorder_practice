#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> array(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    // 要素数3のカウント配列を作成し初期化
    int counts[3] = {0, 0, 0};

    // 各要素のカウントする
    for (int i = 0; i < N; i++)
    {
        if (array[i] == 1)
        {
            counts[0]++;
        }
        else if (array[i] == 2)
        {
            counts[1]++;
        }
        else if (array[i] == 3)
        {
            counts[2]++;
        }
    }

    // 組み合わせの和
    long long result = 0;
    for (int i = 0; i <= 2; i++)
    {
        result += (static_cast<long long>(counts[i]) * (counts[i] - 1)) / 2; // nC2の計算
    }

    cout << result << endl;
    return 0;
}
