#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int end = sqrt(n);
	for (int i = 2; i <= end; ++i) {
		if (n % i == 0) {
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
}
