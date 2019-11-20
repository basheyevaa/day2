#include <iostream>
using namespace std;
int main()
{
    double n,p=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        p+=1.0/i;
    }
     cout<<p;
    return 0;
}
