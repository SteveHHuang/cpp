#include <iostream>
#include <queue>
#include <random>

// priority queue是默认按照顺序排好元素的queue i.e. .top()会输出这个queue中最大的数

using namespace std;

int main(){
    random_device rd;              // 随机种子
    mt19937 gen(rd());             // 梅森旋转算法生成器
    uniform_int_distribution<> dis(1, 100);  // 均匀分布 [1,100]


    priority_queue<int> pq;// 默认降序
    priority_queue<int, vector<int>, greater<int>> pq_asc; // 小顶堆。升序的pq
    // int 表示数据类型
    // vector<>表示
    

    for(int i=0;i<10;i++){
        pq.push(dis(gen));   // 每次生成一个随机整数到pq里
        pq_asc.push(dis(gen));   // 每次生成一个随机整数到pq里

    }
    cout << pq.top() << '\n';
    pq.pop();
    cout << pq.top() << '\n';
    pq.pop();
    cout << pq.top() << '\n';
    cout << pq_asc.top() << '\n';

    return 0;
}