#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int k;
    cin>> k;
for(int n=2;n<=999;n++){
    if((1+n)*n==2*k){
      int a=n; 
        cout<<a;
         break;
    }   
}
return 0;
}
