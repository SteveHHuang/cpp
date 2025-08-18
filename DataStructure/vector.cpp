#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ret;
    cout << ret.size() << '\n';
    ret.push_back(1024); // 插入到尾部
    cout << ret.size()<< '\n';
    cout << ret[0] << '\n';

    vector<int> ret2 = {1,2,3,4,5};

    for (int i = 0; i<ret2.size(); ++i){
        cout<< ret2[i] << ' ';
    }
}