#include <iostream>

using namespace std;
// 20250723
// 函数指针数组

typedef void (*ptrs[]) (int a, double b, bool c);// 中括号内的数是ptrs这个类型的数组的长度，不加为非固定长度

void func1(int a, double b, bool c){
    cout << a << ',' << b << ',' << c << '\n'; 
}

void func2(int a, double b, bool c){
    cout << a << ',' << b << ',' << c << '\n'; 
}

void func3(int a, double b, bool c){
    cout << a << ',' << b << ',' << c << '\n'; 
}

void func4(int a, double b, bool c){
    cout << a << ',' << b << ',' << c << '\n'; 
}

int main(){
    ptrs b = {func1, func2, func3, func4};

    cout << (void*)b[0] << '\n'; // 加上(void*)以防止cout无法直接输出函数指针
    cout << (void*)b[1] << '\n';
    cout << (void*)b[2] << '\n';
    cout << (void*)b[3] << '\n';
    return 0;
}