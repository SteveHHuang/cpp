#include <iostream>

using namespace std;

//全局区存放全局变量、全局常量、静态变量、字符串常量
//栈区存放局部常量和局部变量

int g_a = 1; //global variable
int g_b = 2;
const bool x = false;
const long long y = 9;

int main(){
    cout << &g_a << '\n' << &g_b << '\n';
    cout << &x << '\n' << &y << '\n';



    int c = 3; //local variable
    int d = 4;
    static int e = 5;// static variable
    static int f = 6;
    cout << &c << '\n' << &d << '\n';
    cout << &e << '\n' << &f << '\n';

    const int v = 3; // local constant
    const int w = 42;
    cout << &v << '\n' << &w << '\n';


    cout << &"SteveHuang" << '\n';
    return 0;
}
