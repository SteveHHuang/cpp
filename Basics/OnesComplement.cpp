// 20250707
#include <iostream>
using namespace std;
// 9618 AS chapter 1

int main()
{
    int a = 0b1111;
    int b = ~a; // one's complement

    cout << a << '\n';
    
    cout << b << '\n'; 
    
    cout << b+1 << '\n'; // two's complement
    return 0;
}