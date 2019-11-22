#include <iostream>
using namespace std;
int main (){
    for(int i=10000; i<=99999; i++){
        if(i%2==0&&((i/100)%10)%2==1&&((i/10000)%10+(i/1000)%10+(i/100)%10+(i/10)%10+i%10)%4==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
