#include <iostream>

using namespace std;

int main()
{
    int temp;
    int a = 21;
    int b = 22;

    a = (temp = b, b=a, temp); 
    // 依次执行多个表达式，整个表达式的结果是最后一个表达式的值。a,b,c 从左到右的顺序执行
    // 逗号表达式一定要加括号。否则它不会被当成一个表达式，而会被认为是多个语句
    cout << a << '\n';
    cout << b << '\n';
}