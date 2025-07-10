// 20250710
#include <iostream>

using namespace std;

//常量指针

int main(){
    int a = 10;
    int* const ptra = &a; //ptra指向的地址不可修改，但是地址里面存的值可以修改

    *ptra = 20;
    cout << a << '\n';
    return 0;
}