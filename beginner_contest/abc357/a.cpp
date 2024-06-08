#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> array(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int result = 0;

    for (int i = 0; i < N; i++)
    {
        if (M - array[i] >= 0)
        {
            M -= array[i];
            result++;
        }
        else
        {
            break;
        }
    }

    cout << result << endl;

    return 0;
}
