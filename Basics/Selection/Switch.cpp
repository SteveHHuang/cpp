// 20250707
#include <iostream>
using namespace std;

// switch类似于9618 Pseudocode的CASE OF语句
// 但是switch的情况只能是某个特定的值，不能用表达式


int main()
{
    int Mark;
    cin >> Mark;
    switch(Mark/10){ // CASE OF MARK/10
         
        case 10: 
            cout << "A*, Full mark!" << '\n'; //case只能为int或者char(自动转换为acsii value)，不能是某个条件。
            break; //写上break，用于跳出这个switch
        case 9: 
            cout << "A*" << '\n';
            break;
        case 8: 
            cout << "A" << '\n'; 
            break;
        default: 
            cout << "Below A" << '\n'; // 和9618的OTHERWISE:...大同小异
    }

    return 0;
}