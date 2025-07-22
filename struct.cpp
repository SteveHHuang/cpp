#include <iostream>

using namespace std;

struct Student{
    char name [10];
    int maths;
    int physics;
    int cs;

};

int main(){
    Student a;
    cin >> a.maths;
    cout << a.maths << '\n';


    return 0;
}