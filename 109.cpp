#include <iostream>
#include<cmath>
using namespace std;
int main (){
 int n;
 cin>>n;

 for(int i=1;i<=n;i++){
     if(i%2==1){
         for(int j=1; j<=7;j++){
         cout<<'*';
     }
     }
     if(i%2==0){
         for(int j=1;j<=4; j++){
             cout<<'*';
         }

     }
     cout<<endl;
 }

    return 0;
}
