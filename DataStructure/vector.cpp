#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> ret;
    // cout << ret.size() << '\n';
    // ret.push_back(1024); // 插入到尾部
    // cout << ret.size()<< '\n';
    // cout << ret[0] << '\n';

    // vector<int> ret2 = {1,2,3,4,5};

    // for (int i = 0; i < (int)ret2.size(); ++i){
    //     cout<< ret2[i] << ' ';
    // }
    // cout << '\n';

    // ret2.push_back(12);
    // cout << ret2.size() << '\n';

    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    for (auto element: v){ // Iterator
        cout << element << '\n';
    }

    for(unsigned long i = 0; i < v.size(); ++i){
        cout<< v[i] << '\n';
    }

    v[0] = 4;
    v.erase(v.begin()+1);// .begin() is also an iterator
    for (auto element: v){ // Iterator
        cout << element << '\n';
    }
}