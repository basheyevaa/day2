#include <iostream>
using namespace std;
int main()
{
    float a=24, b=24.5, c=23.8;
    while(a<35 && b<35.5 && c<34.8){
           a+=1.0;
           b+=1.0;
           c+=1.0;
           cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
    return 0;
}
