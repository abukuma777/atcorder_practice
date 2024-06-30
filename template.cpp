#include <bits/stdc++.h>
using namespace std;

// 最大値を更新する関数
// aがbより小さい場合にaをbに更新し、trueを返す
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
// 最小値を更新する関数
// aがbより大きい場合にaをbに更新し、trueを返す
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
int main()
{
    return 0;
}
