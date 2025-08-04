#include <iostream>

using namespace std;

struct Student{
    char name [10];
    int maths;
    int physics;
    int cs;

};

typedef struct{
    string name;
    string subject;
    int age;
    int level;
}Teacher;

int main(){
    Student a;
    // cin >> a.maths;
    // cout << a.maths << '\n';
    Teacher tianbing;
    Teacher liguangyu;
    Teacher kehui;
    cin >> tianbing.subject;
    cin >> liguangyu.subject;
    cin >> kehui.subject;

    cout << tianbing.subject << '\n' << liguangyu.subject << '\n'  << kehui.subject << '\n';

    return 0;
}