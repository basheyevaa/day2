#include <iostream>
#include<cmath>
using namespace std;
int main (){
    for(int i=100; i<=999; i++){
        if(i==(pow(((i/100)%10),3)+pow(((i/10)%10), 3)+pow((i%10),3))){
            cout<<i<<" ";
        }
    }
    return 0;
}
