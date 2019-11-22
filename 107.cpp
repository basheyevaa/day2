#include <iostream>
#include<cmath>
using namespace std;
int main (){
 int n=1, sum=0;

 for(int i=1;i<=10;i++){
     for(int j=1; j<=i*n;j++){
         cout<<i<<" ";
     }
     cout<<endl;
 }
 for(int i=1;i<=10;i++){
       sum+=i*i;
     }
  cout<<sum;
    return 0;
}
