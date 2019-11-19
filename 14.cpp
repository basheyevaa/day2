int main()
{
    int n,a[n];
    A="no"; 
   cin>>n;
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-i-1]){
            break;
            if(i==n/2-1){
                A="yes";
            }
        }
        cout<<A;
    }
    
    return 0;
}
