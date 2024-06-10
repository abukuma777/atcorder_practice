#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int N;
    cin >> N;

    double P, Q;

    // calc
    double expected_value_all = 0.00;
    for (int i = 0; i < N; i++)
    {
        cin >> P >> Q;
        expected_value_all += Q / P;
    }

    // output
    // setprecision(6)で少数第６位まで出力するようにする
    cout << fixed << setprecision(6) << expected_value_all << endl; // 6桁の小数点以下を表示
    return 0;
}
