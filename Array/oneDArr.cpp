//20250709

#include <iostream>
#include <string>
using namespace std;

//c++中的一个数组内的所有数据必须是同一个数据类型
//起始下标是0
//用大括号把元素扩起来

int main(){
    int a[1024]; //size是1024，最后一个下标是1023
    int b[512] = {1,2,3}; // 未初始化的元素默认为0

    for (int i=0; i<512; ++i){
        b[i] = i;
        cout << b[i] <<'\n';
    };

    /*
    for (int i=0; i<=1024; ++i){
        a[i] = i;
        cout << a[i] <<'\n';
    };

    C++ 不会自动检测数组越界。
    数组越界会直接在内存里访问“别的东西”
    如果恰好不会崩溃，那程序还是能运行。但结果可能错/可能崩
    
    e.g: 
    zsh: abort      ./"oneDArr"
    */

    cout << sizeof(a) << '\n';
    return 0;
}