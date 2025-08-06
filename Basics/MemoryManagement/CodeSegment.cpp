#include <iostream>

using namespace std;

//代码区存放程序的机器指令（可执行代码），通常是只读的。
//i.read-only 
//ii. shared, save memory space
void PrintMSG(){
    cout << "Hello, world" << '\n';
}

int main(){
    PrintMSG();
    while(1){}
    return 0;
}
