#include <iostream>

using namespace std;
//堆区的内存由程序员手动申请和释放

//malloc free
//new delete

int* getV(int a){
    int* h = new int(a); //int* h是栈上的变量，但是它指向的地址是堆区
    cout << h << '\n'; // *a存储在堆区
    return h;  //函数返回的时候。虽然h被释放了，但是h指向的内存依然存在
}

int main(){
    int* p = getV(239); 
    cout << *p << '\n'; //所以还是可以解引用得到堆中 数据
    return 0;
}