#include <iostream>
using namespace std;

int main(){

    int sum = 0;

    for(int i = 1; i<100; ++i) { // for (a;b;c)
        sum += i; 
        cout<<sum<<'\n';
    };

    return 0;
} 