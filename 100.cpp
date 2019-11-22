#include<iostream>
using namespace std;
int a=1000;
int main(){
    for(int i=a;i<10000;++i){
        string s=to_string(i);
        int j=0;
        bool q=1;
        while(j<4){
            if(s[j]=='5' && s[j]=='6') {
                q=0;break;
            }
            j++;
        }
        if(q){
            cout<<i<<endl;
        }
    }
}
