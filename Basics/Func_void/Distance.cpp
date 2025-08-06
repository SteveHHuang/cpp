//反复两个坐标real number,计算两点间距离 保留2dp
//sqrt方法可以开根号
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x1, x2, y1, y2;
    while (cin >> x1 >> y1 >> x2 >> y2){
        double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        d = sqrt(d);
        printf("%.2lf", d);
    }   
    return 0;
}