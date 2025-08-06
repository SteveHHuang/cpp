// 20250706
#include <iostream>
using namespace std;


// c++转义字符
// 字符前面加斜杠表示转义

// \\ 单'\'
// \n 换行
// \t tab
// \0 自动舍去后面的字符

// \0xx表示八进制转义字符，表示一个字符的 ASCII 值，xx为八进制数。


int main()
{
    char a = '\n';
    cout << "Hello, World" << a;
    cout << "Hello\nWorld" << a; // \n =换行
    cout << "Hello, World" << a;
    cout << "Hello\tWorld" << a; // \t =tab
    cout << "Hello\077World" << a; // \0自动删掉后面的字符
    return 0;
}