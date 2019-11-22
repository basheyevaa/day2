#include <iostream>
using namespace std;
int main() {
    int d = 0;
    for (char i = 'a'; i <= 'z'; i++) {
        if(d % 5 == 0) cout << endl;
        cout << i << " ";
        d++;
    }
    return 0;
}
