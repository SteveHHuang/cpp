// 20250707
#include <iostream>
using namespace std;
// 9618 AS chapter 4

int main()
{
    int a = 0b1010;
    int b = 0b0110;
    cout << (a&b) << '\n'; // and
    cout << (a|b) << '\n'; // or
    cout << (a^b) << '\n'; // xor

    return 0;
}