#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    long long int a[n+1]={0},b[n+1],sum[n+1]={0},ans=0;
    bool found=false;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    for(int i=1;i<=n;i++){
        if(b[i]){
            ans+=a[i];
            a[i]=0;
        }
    }

    for(int i=1;i<=n;i++){
        sum[i]=(a[i]+sum[i-1]);
    }

    long long int curr=0;

    for(int i=k;i<=n;i++){
        curr=max(curr,sum[i]-sum[i-k]);
    }

    ans+=curr;

    cout<<ans;

    return 0;
}
