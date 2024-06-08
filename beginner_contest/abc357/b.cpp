#include <bits/stdc++.h>
using namespace std;

// TODO: 大文字，小文字への変換部分

int main()
{
    string s;
    cin >> s;

    int uppter_count = 0;
    int lower_count = 0;

    for (char c : s)
    {
        if (isupper(c))
        {
            uppter_count++;
        }
        else if (islower(c))
        {
            lower_count++;
        }
    }

    if (uppter_count > lower_count)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
