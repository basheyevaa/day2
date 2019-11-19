#include <iostream>
using namespace std;
int main()
{
    int a[3], count=0;
    for(int i=0; i<3; i++) {
        cin>>a[i];
    }
    for(int i=0; i<3; i++){
        if(a[i]>0){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}
