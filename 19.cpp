#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,S,p;
    cin>>a>>b>>c;
    if((a+b)>c || (a+c)>b || (b+c)>a){
       p=(a+b+c)/2*1.0;
       S=sqrt(p*(p-a)*(p-b)*(p-c));
       cout<<S;
    }
    else {
        cout<<"no triangle";
    }
    return 0;
}
