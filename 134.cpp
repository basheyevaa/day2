#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
long long x,y, s=0;
       double r;
cin>>r; 
for(x=0;-r<x,x<r;x++)
{
for(y=0;-r<y,y<r;y++)
{
if(x*x+y*y<=r*r)
{
s++;
}
}
}
cout<<s + 1;
return 0;
}
