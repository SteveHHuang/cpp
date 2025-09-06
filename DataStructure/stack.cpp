#include <iostream>
#include <stack>
// Stack: Last In First Out LIFO
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(8);
    s.push(3);
    s.push(5);
    cout<< s.size() << '\n';
    cout<< s.top() << '\n'; // 输出最上面的元素
    cout<< s.empty() << '\n';//判断是否有元素
    s.pop();
    cout<< s.size() << '\n';
    cout<< s.top() << '\n';

}