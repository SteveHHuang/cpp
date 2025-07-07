#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    string y = "添砖";
    cin >> a;

    if(a & 1)
    {
        cout << a << " is odd"<<'\n';
        y += "加瓦";

    }
    else if(a == 0){
        cout << a << " is zero"<<'\n';
    }
    else if(a < 0){
        cout << a << " is a negative even number" <<'\n';
    }
    else{
        cout << a << " is even" <<'\n';
    }
    

    int c = 3;
    int d = 2; 
    int e;
    e = (c>d)? c : d; 
    //条件运算符，a?b:c 其中a,b,c为表达式
    //如果a为真 那么执行b 否则执行c 
    
    cout << y << '\n';
    cout << e << '\n';
    cout << ((c>d)? (c>a ? c : a) : d) << '\n'; // 条件运算符b, c可嵌套
    return 0;
}