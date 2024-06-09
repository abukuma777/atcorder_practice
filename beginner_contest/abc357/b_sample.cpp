#include <iostream>
#include <cctype> // isupper, islower を使用するために必要

int main()
{
    char ch1 = 'A';
    char ch2 = 'a';

    if (isupper(ch1))
    {
        std::cout << ch1 << " is uppercase." << std::endl; // A is uppercase.
    }

    if (islower(ch2))
    {
        std::cout << ch2 << " is lowercase." << std::endl; // a is lowercase.
    }

    return 0;
}
