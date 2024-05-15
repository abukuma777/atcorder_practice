#include <bits/stdc++.h>
using namespace std;

int main()
{
    tuple<int, string, bool> data(1, "hello", true);
    get<2>(data) = false;
    cout << get<1>(data) << endl; // hello

    data = make_tuple(2, "WORLD", true);

    int a;
    string s;
    bool f;
    tie(a, s, f) = data;
    cout << a << " " << s << " " << f << endl; // 2 WORLD 1
}
