#include <iostream>
using namespace std;
//指针函数的返回值为指针类型
//e.g: 返回一个数组，by返回数组首地址
int* func(){
    return NULL;
}

int* getArithmeticSeq(int a,int d,int n){
    int* result = new int [n];
    
    for(int i = 0; i<n; ++i){
        result[i] = a +i*d;
    }
    return result;
}

int main(){
    int *seriesA = getArithmeticSeq(1,2,10);
    
    for(int i=0; i<10; ++i){
        cout << *(seriesA+i) << '\n'; //通过指针偏移并解引用输出
        cout << seriesA[i] << '\n'; //通过数组下标输出。和上面一行等价
        cout << '\n';
    };

    return 0;
}