#include <iostream>
using namespace std;
int main(){ 
    int a, a1, a2, a3, b, b1, b2, b3;
    cin>>a>>b;
    if ( a < 100 || a > 999 || b<100 || b>999 ) {
        cout<< "Invalid number(s)";
        return 0;
    }
    a3 = a%10;
    a2 = a/10%10;
    a1 = a/100%10;
    b1 = b%10;
    b2 = b/10%10;
    b3 = b/100%10;
    cout<< a1<<a2<<b3<<b2;
    return 0;
    }
