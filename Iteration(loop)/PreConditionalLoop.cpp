#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i<100){
        cout << "世界你好" << "\n";
        i += 1;
    }

    int a, b;
    
    while(cin >> a >> b) //cin的结束条件是没有输入的时候退出，终端crtl+c
    {
        cout << a+b << '\n';
    }

    return 0;
}