#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cin >> a;
    cout << "The current value of a is "<< a << '\n';

    for (int i = 0, j = 10; i < j; ++i, --j){
        cout << i << ", " << j << endl;
    }
    return 0;
}