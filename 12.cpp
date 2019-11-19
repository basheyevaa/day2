#include <iostream>
using namespace std;
int main()
{
    int a,a1,a2,a3,a4,a5;
    cin>>a;
    if(a>9999 && a<100000){
        a5=a%10;
        a4=(a%100-a4)/10;
        a3=(a%1000-a%100)/100;
        a2=(a%10000-a%1000)/1000;
        a1=(a-a%10000)/10000;
        a2=0;
        a4=0;
        cout<<a1<<a2<<a3<<a4<<a5;
        }
        else {
            cout<<"not 5 digit number";
        }
    return 0;
}
