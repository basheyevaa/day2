#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Napravleniya: 11 12 13 14;"<<"  "<<"Komandi: 0 1 -1;"<<endl;
    cin>>a>>b;
    if((a==11 && b==0) || (a==12 && b==-1) || (a==14 && b==1)){
    cout<<"sever";
    }
        else if((a==11 && b==1) || (a==12 && b==0) || (a==13 && b==-1)){
            cout<<"zapad";
        }
        else if((a==11 && b==-1) || (a==13 && b==1) || (a==14 && b==0)){
            cout<<"vostok";
        }
        else if((a==12 && b==1) || (a==13 && b==0) || (a==14 && b==-1)){
            cout<<"ug";
        }
    return 0;
}
