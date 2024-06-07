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

    // 要素数4のカウント配列を作成し初期化
    int counts[4] = {0, 0, 0, 0};

    // 各要素のカウントする
    for (int i = 0; i < N; i++)
    {
        if (array[i] == 100)
        {
            counts[0]++;
        }
        else if (array[i] == 200)
        {
            counts[1]++;
        }
        else if (array[i] == 300)
        {
            counts[2]++;
        }
        else if (array[i] == 400)
        {
            counts[3]++;
        }
    }

    // 100と400、200と300の組み合わせをカウントする
    long long result = 0;
    result += static_cast<long long>(counts[0]) * counts[3];
    result += static_cast<long long>(counts[1]) * counts[2];

    cout << result << endl;

    return 0;
}
