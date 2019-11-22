#include <iostream>
using namespace std;
int main()
{
 int x, count=0;
 cin>>x;
 if(x<10){
     count+=x>3&&x<8?1:0;
 }
 if(x>100&&x<999){
   int a=(x/100)%10;
   int b=(x/10)%10;
   int c= x%10;
 count+=a>3&&a<8?1:0;
   count+=b>3&&b<8?1:0;
    count+=c>3&&c<8?1:0;
 }
 cout<<count;
	return 0;
}
