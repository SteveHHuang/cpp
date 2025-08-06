#include <iostream>

using namespace std;

// new & delete

int main(){
    int* ptr = new int(522); // new返回一个指向特定数据类型的指针
    //可以通过解引用ptr初始化，也可以在int后面括号加上初始化的值
    *ptr = 520;
    cout << *ptr << '\n';

    delete ptr; //不用了记得删除。否则会内存泄露

    ptr = NULL; //删除后可以置空，这样可以通过判断ptr是否为空来进行进一步操作。如果为空则不去访问ptr，否则再去解引用


    return 0;
}
