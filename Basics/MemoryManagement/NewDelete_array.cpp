#include <iostream>

using namespace std;
//数组的内存申请和释放

//输入一个数组，返回一个数组。其中包含了输入的数组中相邻两个元素的差值
int* getGapList(int *arr, int size){
    int* p = new int[size-1];
    for(int i = 0; i < size-1 ; ++i){
        p[i] = arr[i+1] - arr[i];

    };
    return p;
}

int main(){
    int arr[] = {1,5,6,4,4,3,3,2,1,9};
    int* p = getGapList(arr, 10);

    for (int i = 0; i < 9 ; ++i){
        cout << p[i] << ' ';
    };
    cout << '\n';

    delete[] p; //不加中括号那么只会删除这个数组的首地址，加了会删除后面的所有元素
    p = NULL;
    return 0;
}