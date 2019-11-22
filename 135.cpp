#include <iostream>
using namespace std;
int main () {
    int sum = 0;
    while (sum != 11) {
        int a = rand() % 2;
        cout << a << " ";
        sum += a;
    }
    return 0;
}
