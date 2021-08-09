#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q,k;
    cin>>n>>q>>k;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    while(q--){
        int l,r,res;
        cin>>l>>r;

        res=k+(a[r]-a[l]+1)-2*(r-l+1);
        cout<<res<<'\n';
    }
    return 0;
}
