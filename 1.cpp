#include <iostream>
using namespace std;

int main() {
    float a = 10.2;
    cout << "a = " << a << endl;  // endl 会自动刷新缓冲区
    cout.flush();                 // 手动强制刷新一次
    system("pause");             // 防止窗口一闪而过
    return 0;
}

