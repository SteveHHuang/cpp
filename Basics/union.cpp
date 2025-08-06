#include <iostream>
using namespace std;
// struct 结构体
// union 联合体

//union vs struct

struct a {
    int i;
    char d; 
    double r[10];
};

union b {
    int i;
    char d;  
    double r[10];

};

int main(){
    a da;
    cout << &da.i << ' ' << (void *)&da.d << ' ' << da.r << '\n'; 
    // struct的每个成员的起始位置都不一样
    b db;
    cout << &db.i << ' ' << (void *)&db.d << ' ' << db.r << '\n';
    //union里面的所有成员的起始位置一样 
    return 0;
} 
