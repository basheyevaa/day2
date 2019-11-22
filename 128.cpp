#include <iostream>
using namespace std;
int main()
{
	int b, a, sum1, sum2, k, j, i;
	cin >> a;
	cin >> b;
	for (i = a; i < b; i++)
	{
		sum1 = 0;
		for (k = 1; k < i; k++)
		{
			if (i % k == 0)
			{
				sum1 += k;
			}
		}
		for (j = b; j > a; --j)
		{
			sum2 = 0;
			{
				for (k = 1; k < j; k++)
					if (j % k == 0)
					{
						sum2 += k;
					}
				if (sum1 == j && sum2 == i)
					cout << j << "-" << i << endl;
			}
		}
	}
return 0;
}
