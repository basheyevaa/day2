#include <iostream>
using namespace std;
int main () {
    for(int i = 1000; i < 9999; i++) {
        int a = i/1000;
        int b = (i - i/1000 * 1000) / 100;
        int c = ((i - i/1000 * 1000) - (i - i/1000 * 1000) / 100 * 100) / 10;
        int d = i%10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << i << " ";
        }
    }
    return 0;
}
