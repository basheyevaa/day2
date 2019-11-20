#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,n,a;
    cin>>x;
    cin>>n;
    a=1.0/cos(x);
    for(int i=1; i<n; i++){
        a+=1.0/(cos(pow(x,n)));   
    }
     cout<<a;
    return 0;
}
