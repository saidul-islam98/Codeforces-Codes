#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        long long int a[n],b[n],x[n],y;
        b[0]=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0)
                b[i]+=a[i];
            else
                b[i]=(b[i-1]+a[i]);
        }

        for(int i=1;i<n;i++){
            x[i]=(100LL*a[i]-k*b[i-1]+k-1)/k;
        }
        x[0]=0LL;
        y=*max_element(x,x+n);
        cout<<y<<'\n';
    }
    return 0;
}
