#include <iostream>
using namespace std;
int main(){
for(int i=0; i<10;i++){
    for(int j=0;j<10;j++){
        if(j==i){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
        }
    }
    cout<<endl;
}
	return 0;
}
