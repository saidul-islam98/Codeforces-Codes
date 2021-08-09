#include<bits/stdc++.h>

using namespace std;

int main(){
    int N=1e6+9;

    int t;
    cin>>t;

    while(t--){
        long long int n,u,v;
        cin>>n>>u>>v;

        long long int a[N],cnt=0,ans=1e10;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        for(int i=2;i<=n;i++){
            if(abs(a[i]-a[i-1])>=2){
                ans=0;
            }
            else if(abs(a[i]-a[i-1])==1){
                ans=min(ans,min(u,v));
            }
            else if(a[i]==a[i-1]){
                ans=min(ans,v+min(u,v));
            }
        }

        cout<<ans<<'\n';
    }
    return 0;
}
