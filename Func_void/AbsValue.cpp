//反复输入real number,返回其绝对值

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    while (cin >> x){
        x = fabs(x);
        printf("%.2lf\n", x);
    }   
    return 0;
}