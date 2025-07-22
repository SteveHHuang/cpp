//20250710

//c++的参数传递都是值传递 BYVAL
//c++需要用指针才能实现地址传递 BYREF
#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    a = (temp = b, b=a, temp);
    cout << "a = " << a <<'\n';
    cout << "b = " << b <<'\n';
}

int main(){
    int x = 12;
    int y = 23;
    swap(12,23);//只更改了local variables
    cout << "x = " << x <<'\n'; //但是global variables没变
    cout << "y = " << y <<'\n'; 
    return 0;
}