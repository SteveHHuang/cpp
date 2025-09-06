#include <iostream>
#include <queue>

using namespace std;

// Queue: First In First Out FIFO

int main(){
    queue<int> q;
    q.push(1);
    q.push(4);
    q.pop();
    q.push(3);
    cout<<q.size()<<'\n';
    cout<<q.front()<<'\n';
    return 0;
}