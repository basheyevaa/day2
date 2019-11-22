#include <iostream>
using namespace std;
int main() {
    int a = 1 + rand() % 100;
    int b = 1 + rand() % 100;
    int c = 1 + rand() % 100;
    if(a == b || a == c || b == c)
        main();
    else
        cout << a << " " << b << ' ' << c;
    return 0;
}
