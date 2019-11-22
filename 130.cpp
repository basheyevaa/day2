#include <iostream>
using namespace std;
int main()
{
  for(int i=100000;i<=999999;i++){
       int a,b, c,d,e,f,a1,b1, c1,d1,e1,f1;
  a=(i/100000)%10;
  b=(i/10000)%10;
  c=(i/1000)%10;
  d=(i/100)%10;
  e=(i/10)%10;
  f=i%10;
    a1=(i/100000)%10;
  b1=((i+1)/10000)%10;
  c1=((i+1)/1000)%10;
  d1=((i+1)/100)%10;
  e1=((i+1)/10)%10;
  f1=(i+1)%10;
  if((a+b+c+d+e+f)%13==0&&(a1+b1+c1+d1+e1+f1)%13==0){
      cout<<i<<" "<<(i+1)<<" "<<"Yes";cout<<endl;
  }
  }
	return 0;
}
