#include <iostream>
using namespace std;
int main()
{
  int x,count=0;
  cin>>x;
  int a,b, c,d,e,f;
  a=(x/100000)%10;
  b=(x/10000)%10;
  c=(x/1000)%10;
  d=(x/100)%10;
  e=(x/10)%10;
  f=x%10;
  if(x<10){
      if(f%2==1){
          count++;
      }
  }
  if(x>=10&&x<=99){
      count+=f%2==1?1:0;
      count+=e%2==1?1:0;
  }
    if(x>=100&&x<=999){
        count+=f%2==1?1:0;
      count+=e%2==1?1:0;
         count+=d%2==1?1:0;
  }
    if(x>=1000&&x<=9999){
         count+=f%2==1?1:0;
      count+=e%2==1?1:0;
         count+=d%2==1?1:0;
      count+=c%2==1?1:0;
      
  }
    if(x>=10000&&x<=99999){
        count+=f%2==1?1:0;
      count+=e%2==1?1:0;
         count+=d%2==1?1:0;
      count+=c%2==1?1:0;
         count+=b%2==1?1:0;
  }
    if(x>=100000&&x<=999999){
        count+=f%2==1?1:0;
      count+=e%2==1?1:0;
         count+=d%2==1?1:0;
      count+=c%2==1?1:0;
         count+=b%2==1?1:0;
      count+=a%2==1?1:0;   
  }
  cout<<count;
	return 0;
}
