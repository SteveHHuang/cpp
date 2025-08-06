//20250709
//c++的二维数组就是数组套数组
#include<iostream>
using namespace std;

int main(){
    int arr[3][4]; // 3行4列 3*4

    int arr1[4][4]={
        {1,2},
        {3,4},
        {6},
        {7,8,9}//未初始化的元素用0补位

    };

    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            cout << arr1[i][j] << ' ';
        }
        cout<<'\n';
    };

    cout << '\n';
    // 0713 ptr
    cout << *arr1[0] << '\n';
    cout << *(arr1[0])+1 << '\n';

    return 0;
}