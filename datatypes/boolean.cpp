// 20250706
#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = false;

    cout << a << '\n'; //1表示true
    cout << b << '\n'; //0表示false
    a = !a;
    cout << a << '\n';
    cout << sizeof(a) << '\n'; //boolean占用一个字节
    // while (a && !b)
    // {
    //     cout << 1 << endl;
    // };

    return 0;
}