// 20250710
#include <iostream>
using namespace std;
/*
空指针:不指向任何有效内存地址的指针
野指针：一个指针指向已经被释放或无效的内存地址

解引用这两种指针会报错
*/

int main(){
    int* p0 = nullptr; //空指针
    int* p1 = (int *)0x239847; //野指针
    cout << *p0 << '\n'; //解引用时会报错
    cout << *p1 << '\n'; //解引用时会报错
    return 0;
}