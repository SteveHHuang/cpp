#include <iostream>

using namespace std;

// 用sizeof()方法可以检测占用字节数

/*

整数的类型有四种:
long long: 8 bytes [-2^63, 2^63-1]
long: 4 bytes [-2^31, 2^31-1]
int: 4 bytes [-2^31, 2^31-1]
short: 2 bytes [-2^15, 2^15-1]

小数有两种:float, double

字符 char 单引号括起来，占用1个字节，光标会显示ascii code；
char可以用(int)变量 变量里的字符转换成对应的ascii数;
两个char变量之间可以进行数学运算


字符串 string 双引号括起来 
*string 可以只有一个字符。但是char不能有两个及以上字符

*/

int main() {
    long long a = 10;
    long b = 10;
    short c = 65538; // c will overflow
    int d = 10;
    
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n"; 
    cout << "d = " << d << "\n";

    cout << sizeof(short) << endl;
    return 0;
};