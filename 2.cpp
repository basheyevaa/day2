#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>5 && b>5 && c%6==0 && d%3!=0) {
    cout<<"yes";
    }
    else {
        cout<<"no";
    }
    return 0;
}
