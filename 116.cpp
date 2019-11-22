#include <iostream>
using namespace std;
int main()
{
    int a, b, n=0;
    cin>>a>>b;
for(int i=a;i<=b;i++){
    if(i%12==0){
        n++;
    }
}
cout<<n;
	return 0;
}
