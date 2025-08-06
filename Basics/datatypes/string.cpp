// 20250706
#include <iostream>
#include <string>
using namespace std;



int main()
{
    char a[] = "字符串常量"; //一个字符串等价于一个char类型的数组
    cout << a << '\n';
    cout << sizeof(a) << '\n';

    string b = "字符串常量";
    cout << b+a << '\n';
    return 0;
}