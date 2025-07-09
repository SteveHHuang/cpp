// 20250709
#include<iostream>
using namespace std;

int addition(int a, int b){ //最前面的数据类型对应返回什么类型的数据
    int sum = a + b;
    return sum;
}

void add(int, int);//函数声明，用于两个函数之间互相调用。
//当n个函数之间互相调用的时候必须在最最前面声明

int main(){
    add(2,3);
    // alt: cout << addition(2,3) << '\n';
    return 0;
}

void add(int a, int b){//void不返回任何数据（就是纯PROCEDURE）
    int sum = a + b;
    cout << sum << '\n';
}