#include <iostream> 
#include <cmath>
using namespace std;
 int main (){
    int x; 
    cin>>x;
    for(int i=1; i<=9999; i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
 
return 0;
}
