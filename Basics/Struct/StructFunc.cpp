#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
};

struct Circle{
    Point centre;
    double radius;
};

void moveCircle(Circle c, int x, int y){
    cout << "The centre of the circle BEFORE moving is at " << '(' << c.centre.x << ',' << c.centre.y <<")"<<'\n';
    c.centre.x += x;
    c.centre.y += y;
    cout << "The centre of the circle is now at " << '(' << c.centre.x << ',' << c.centre.y <<")";
}

int main(){
    Circle C1 = {{0,0}, 5};
    moveCircle(C1,3,4);
    return 0;
}