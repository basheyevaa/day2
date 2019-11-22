#include<bits/stdc++.h>
using namespace std;
double sum=0,a=3;
int main(){
	for(int i=a;i<=111;i+=2){
		sum+=cos(double(i/(i+2)));
	}
	cout<<sum;
}
