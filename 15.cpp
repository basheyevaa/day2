#include <iostream>
using namespace std;
int main()
{
    int a,a1,a2,a3,a4;
        cin>>a;
        if(a<10000 && a>999){
            a4=a%10;
            a3=(a%100-a4)/10;
            a2=(a%1000-a%100)/100;
            a1=(a-a%1000)/1000;
            if(a1>5 && a2<5 && a3<5 && a4<5) {
            cout<<a2<<a3<<a4<<a1;
            }
        }
        else{
            cout<<"not 4 digit number";
        }
    return 0;
}
