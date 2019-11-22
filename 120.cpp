#include <iostream>
using namespace std;
int main()
{
 int x, a, b,c,d;
 cin>>x;
     a=(x/1000)%10;
     b=(x/100)%10;
     c=(x/10)%10;
     d=x%10;
     int y=a>b&&a>c&&a>d?a:b>a&&b>c&&b>d?b:c>a&&c>b&&c>d?c:d;
     cout<<y;
	return 0;
}
