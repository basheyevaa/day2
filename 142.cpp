#include <iostream>
using namespace std;
int main() {
    int count = 0;
    int a;
    a = rand() % 100 + 1;
    int guess;
    while (count != 3) {
        cin >> guess;
        if (guess < a) {
            cout << "Enter bigger number" << endl;
        }
        else if (guess > a) {
            cout << "Enter smaller number" << endl;
        }
        else {
            cout << "Bingo" << endl;
        }
        count++;
    }
    cout << "Number is: " << a << endl;
    return 0;
}
