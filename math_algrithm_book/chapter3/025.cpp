#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int N;
    cin >> N;

    int A[N], B[N];

    double sum_A = 0.00, sum_B = 0.00;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum_A += A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
        sum_B += B[i];
    }

    // calc
    double expected_value_all;
    expected_value_all = (sum_A * (1.0 / 3)) + (sum_B * (2.0 / 3));

    // output
    // setprecision(6)で少数第６位まで出力するようにする
    cout << fixed << setprecision(6) << expected_value_all << endl; // 6桁の小数点以下を表示
    return 0;
}
