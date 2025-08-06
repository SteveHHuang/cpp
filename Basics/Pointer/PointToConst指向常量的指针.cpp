//20250710
#include <iostream>

using namespace std;
//指向常量的指针
//指向常量的指针不可解引用，即不能通过常量指针来修改地址内存的值
//指针指向的地址可以更改
int main() {

    int a = 10;
    int b = 20;
    const int* pa = &a; 
    // *pa = 55 会报错
    pa = &b; //指针指向的地址可以更改
    cout << *pa << '\n'; 
    return 0;
}
