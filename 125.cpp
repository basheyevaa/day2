#include <iostream> 
#include <cmath>
using namespace std;
 int main (){
     int a,b,h;
     cin>>a>>b;
     h=b-a+1;
     for(int i=a,j=1;i<=b,j<=h;i++,j++){
       cout<<j<<'.'<<"x="<<i<<'\t'<<"f(x)="<<i*i-sin(i);
       cout<<endl;
     }
 
return 0;
}
