#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 入力される3文字の文字列 S を格納
    // S の形式は "NxM" （例: 3x8）
    string S;
    cin >> S;

    // S の1文字目は数字（'1'～'9'）なので、それを整数に変換する
    // '0' の文字コードを引くことで対応する整数値が得られる
    int num1 = S[0] - '0';

    // S の3文字目も数字（'1'～'9'）なので、同様に整数に変換
    int num2 = S[2] - '0';

    // num1 と num2 の積を計算し、結果を出力
    cout << num1 * num2 << endl;

    return 0;
}
