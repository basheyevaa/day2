#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	char** a = new char* [n];
	for (int i = 0; i < n; i++){
		a[i] = new char[n + n];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n + n; j++){
			a[i][j] = 'B';
			if (i == 0 || i == n - 1 || j == 0 || j == 2 * n - 1){
				a[i][j] = 'A';
			}
			cout << a[i][j];
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
