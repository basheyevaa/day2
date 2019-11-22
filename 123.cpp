#include <iostream>
using namespace std;
int main()
{
 int x;
 cin>>x;
   int a=(x/10000)%10;
   int b=(x/1000)%10;
   int c=(x/100)%10;
   int d=(x/10)%10;
   int e=x%10;
   if(x>=10&&x<100){
       cout<<e*10+d;
   }
   if(x>=100&&x<=999){
       cout<<e*100+d*10+c;
   }
      if(x>=1000&&x<=9999){
       cout<<e*1000+d*100+10*c+b;
   }
      if(x>=10000&&x<=99999){
       cout<<e*10000+d*1000+c*100+10*b+a;
   }
	return 0;
}
