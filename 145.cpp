#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z'){
        a += 32;
    }
    if(a == 'x') cout << "y z a";
    else if (a == 'y') cout << "z a b";
    else if (a == 'z')cout<<"a b c";
    else cout << char(a+1) << ' ' << char(a+2) << ' ' << char(a+3);
    return 0;
}
