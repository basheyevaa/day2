#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a = 10;
    for(int i = 2; i <= 10; i++) {
        a+=a * 10/100;
        cout << a << endl;
    }
    return 0;
}
