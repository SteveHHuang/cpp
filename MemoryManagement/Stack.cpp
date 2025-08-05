#include <iostream>

using namespace std;

//栈区存放函数参数、局部常量和局部变量

char* func(){
    char c[100] = "Hello, world"; // c存放在栈区
    return c;
}

void test(int a, int b){ // parameter
    int c, d; // local variable
    cout << &a << '\n';
    cout << &b << '\n';
    cout << &c << '\n';
    cout << &d << '\n';
}

int main(){
    cout << func() << '\n'; //不能返回局部变量的地址，因为局部变量在func执行完之后就被销毁了，变成了野指针

    test (5,6); //形参和局部变量存的位置很近
    return 0;
}