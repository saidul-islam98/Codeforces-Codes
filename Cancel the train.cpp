#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,cnt=0;
        cin>>n>>m;

        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mxa=a[n-1];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int mxb=b[m-1];
        int mx=max(mxa,mxb);

        int v[mx+1];
        for(int i=1;i<=mx;i++){
            v[i]=i;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[a[i]]==b[j]){
                    cnt++;
                }
            }
        }

        cout<<cnt<<'\n';

    }
    return 0;
}
