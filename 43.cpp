#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n,sum=0;
    cin>>n;
    for(int i=0; i<=n; i++){
        sum+=pow(i,2);
    }
     cout<<sum;
    return 0;
}
