//20250709

#include<iostream>
using namespace std;

int main(){
    int arr[3][4]; // 3行4列

    int arr1[4][4]={
        {1,2},
        {2,3},
        {6},
        {7,8,9}//未初始化的元素用0补位

    };

    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            cout << arr1[i][j] << ' ';
        }
        cout<<'\n';
    };

    return 0;
}