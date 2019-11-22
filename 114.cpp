#include <iostream>
using namespace std;
int main()
{
for(int i=1; i<=30;i++){
  if(i%2==0){
      for(int j=1;j<=5; j++){
          cout<<1<<" ";
      }
  }
  if(i%2==1){
      for(int j=1;j<=i;j++){
          cout<<j<<" ";
      }
  }
    cout<<endl;
}
	return 0;
}
