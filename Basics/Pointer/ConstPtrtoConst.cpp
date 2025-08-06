// 20250711
#include <iostream>
using namespace std;
//既是指向常量的指针，又是常量指针
//结合了二者的特点，既不能解引用又不能改指向的地址

int main(){
    int a = 10;
    int b = 20;
    const int* const pa = &a;
    cout << pa << '\n';
    cout << *pa << '\n';
    // *pa = b; 会报错
    // pa = &b; 会报错

    return 0;
}