//20250713
#include <iostream>
using namespace std;

//通过传指针（地址）的方式来交换两个数变量
void swap(int *a, int *b){ 
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    int x = 5;
    int y = 6;
    swap(&x,&y);

    cout << "x = " << x << '\n' << "y = " << y << '\n';

    return 0;
}