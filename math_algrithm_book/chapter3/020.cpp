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

    int answer = 0;

    // 5つのカードの番号(i, j, k, l, m)を全探索
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                for (int l = k + 1; l < N; l++)
                {
                    for (int m = l + 1; m < N; m++)
                    {
                        if (array[i] + array[j] + array[k] + array[l] + array[m] == 1000)
                        {
                            answer++;
                        }
                    }
                }
            }
        }
    }
    cout << answer << endl;
    return 0;
}
