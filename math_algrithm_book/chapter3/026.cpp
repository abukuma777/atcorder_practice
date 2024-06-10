#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double expected_value = 0.0;

    // 期待値を計算
    for (int i = 1; i <= N; ++i)
    {
        expected_value += 1.0 / i;
    }

    expected_value *= N;

    // 出力
    cout << fixed << setprecision(12) << expected_value << endl;

    return 0;
}
