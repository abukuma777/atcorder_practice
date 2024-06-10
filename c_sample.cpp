#include <iostream>
using namespace std;

// 再帰処理の練習問題

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // 基本ケース
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // 再帰ケース
}

int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
