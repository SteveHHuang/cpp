//20250709

#include <iostream>
using namespace std;

//类似于9618 pseudocode REPEAT...UNTIL...
int main(){

    int a = 9;

    do{ //REPEAT...
        cout << a << '\n';
        ++a;
    } while (a<=10); //UNTIL(a > 10)
    return 0;
}