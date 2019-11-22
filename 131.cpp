#include <iostream>
#include <cmath>
using namespace std;
int main()
{
for(int i=2;i<10000;i++){
     int b, c,d,e,f;
  b=(i/10000)%10;
  c=(i/1000)%10;
  d=(i/100)%10;
  e=(i/10)%10;
  f=i%10;
  int sum=b+c+d+e+f;
  for(int j=2; j<100;j++){
      if(i==pow(sum,j)){
          cout<<i<<endl; 
      }  
      } }
 
	return 0;
}
