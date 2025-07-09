// 20250707
#include <iostream>
using namespace std;
// 9618 AS chapter 4

int main()
{
    int a = 0b11;

    a = (a << 2); // 3*(2**2)
    cout << a << '\n';

    a = (a >> 1); // (3*(2**2))/(2*1)
    cout << a << '\n';

    int b = -1;
    
    b = (b << 22); 
    cout << b << '\n'; // Sign(The greatest bit) is retained

    b = (b >> 12); 
    cout << b << '\n';

    return 0;
}