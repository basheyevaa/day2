#include <iostream>
using namespace std;
int main()
{
	int i, n, j, c;
	cin >> n;
	for (i = 1; i < n; i++) {
		c = 0;
		for (j = 1; j < n; j++)
			if ((i % j == 0) && (j != i))
				c = c + j;
		if (i == c)
			cout << i <<  endl;
	}
	return 0;
}
