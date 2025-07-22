#include <iostream>
using namespace std;

double (*ptr) (int a, int b, int c);
//ptr指向一个函数，其中有三个参数a, b, c。返回的数据为double类型
void (*ptr1)(int a, int b, int c);

double func(int a, int b, int c){
    cout << a << ',' << b << ',' << c << '\n';
    return 0.0;
}

void func1(int a, int b){
    cout << a << ',' << b << '\n';
}

int main() {
    ptr = func; //直接写函数名代表这个函数的地址
    ptr(4,5,6);
    // ptr = func1; invalid, 不能将 "void (*)(int a, int b)" 类型的值分配到 "double (*)(int a, int b, int c)" 类型的实体

    return 0;
}