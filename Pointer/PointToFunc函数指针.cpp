#include <iostream>
using namespace std;

//函数指针定义

double (*ptr) (int a, int b, int c);
//ptr指向一个函数，其中有三个参数a, b, c。返回的数据为double类型
void (*ptr1)(int a, int b, int c);

double func(int a, int b, int c){
    cout << a << ',' << b << ',' << c << '\n';
    return 0.0;
}

void func1(int a, int b, int c){
    cout << a << ',' << b << ',' << c << '\n';
}

//函数指针的类型定义

typedef void (*ptr3) (int a, int b, int c); //double (*变量名) (int a, int b, int c)现在变成了自定义类型，名叫ptr
// typedef可以通过命名变量的方式来给特定数据类型取别名
int main() {
    ptr = func; //直接写函数名代表这个函数的地址
    ptr(4,5,6);
    // ptr = func1; invalid, 不能将 "void (*)(int a, int b)" 类型的值分配到 "double (*)(int a, int b, int c)" 类型的实体
    ptr1 = func1;
    ptr1(1,2,3);
    
    ptr3 a = func1; //a的数据类型是自定义ptr3类型
    a(1,2,3);
    return 0;
}