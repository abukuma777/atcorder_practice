#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int N;
    cin >> N;

    int B[N], R[N];

    int sum_B = 0, sum_R = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
        sum_B += B[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> R[i];
        sum_R += R[i];
    }

    // calc
    double expected_value_all;
    expected_value_all = (static_cast<double>(sum_B) / N) + (static_cast<double>(sum_R) / N);

    // output
    // setprecision(6)で少数第６位まで出力するようにする
    cout << fixed << setprecision(6) << expected_value_all << endl; // 6桁の小数点以下を表示
    return 0;
}
