#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long int ans=0;
    sort(a,a+n);

    for(int i=0;i<n;i++){
        ans+=(a[i]*x);
        if(x-1==0){
            x=1;
        }
        else{
            x-=1;
        }
    }

    cout<<ans;
    return 0;
}
