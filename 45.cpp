#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,n,p;
    cin>>a;
    cin>>n;
    p=pow((a+1),2);
    for(int i=1; i<n; i++){
        p*=pow((a+i+1),2);
           
    }
     cout<<p;
    return 0;
}
