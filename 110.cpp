#include <iostream>
#include<cmath>
using namespace std;
int main (){
 int n,m;
 cin>>n>>m;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
         if(i%2==1){
         cout<<"AAABBB";
         }
         if(i%2==0){
             cout<<"BBBAAA";
         }
     }
       cout<<endl;
 }
    return 0;
}
