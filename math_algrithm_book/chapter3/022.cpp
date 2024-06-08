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

    unordered_map<int, int> count_map;
    long long answer = 0;

    for (int i = 0; i < N; i++)
    {
        int complement = 100000 - array[i];
        if (count_map.find(complement) != count_map.end())
        {
            answer += count_map[complement];
        }
        count_map[array[i]]++;
    }

    cout << answer << endl;
    return 0;
}
