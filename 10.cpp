#include <iostream>
using namespace std;
int main()
{
    int a,a1,a2,a3;
        cin>>a;
        if(a<1000 && a>99){
            a3=a%10;
            a2=(a%100-a3)/10;
            a1=(a-a%100)/100;
            cout<<a3<<a2<<a1;
        }
        else {
            cout<<"not 3 digit number";
        }
    return 0;
}
