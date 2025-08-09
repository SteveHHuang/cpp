#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 1) return 1;
    return n*factorial(n-1);
}

//e.g. Factorial, summation of consecutive n numbers 
int main(){
    int k;
    while(cin >> k){
        cout << factorial(k) << '\n';
    }

    return 0;
}