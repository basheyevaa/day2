#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, max=0, min=100;
    cin>>n;
    int a, b;
    int s[4];
    s[0]=n/1000;
    s[1]=n%1000/100;
    s[2]=n%100/10;
    s[3]=n%10;
    for(int i= 0; i<4; i++) {
        if (max < s[i])
            max = s[i];
        if (min > s[i])
            min = s[i];
    }
    for (int i=0; i<4; i++) {
        if (s[i] == max)
            a = i;
        if (s[i] == min)
            b = i;
    }
    s[a] = min;
    s[b] = max;
    cout<<s[0]*1000+s[1]*100+s[2]*10+s[3];
    return 0;
}
