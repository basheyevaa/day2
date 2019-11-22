#include <iostream>
using namespace std;
int main (){
    for(int i=1000; i<=9999; i++){
        if((i/10000)%10==3||(i/1000)%10==3||(i/100)%10==3||(i/10)%10==3||i%10==3){
            cout<<i<<" ";
        }
    }
    return 0;
}
