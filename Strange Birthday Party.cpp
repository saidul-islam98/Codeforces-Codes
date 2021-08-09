#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        long long int a[n+1],b[m+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1,greater<int>());

        for(int i=1;i<=m;i++){
            cin>>b[i];
        }

        long long int cost=0;
        for(int i=1,j=1;i<=n;i++){
            if(b[a[i]]>b[j] && j<=m){
                cost+=b[j];
                //cout<<"cost: "<<cost<<" j:"<<j<<'\n';
                j++;
            }
            else{
                cost+=b[a[i]];
                //cout<<"cost: "<<cost<<" i:"<<i<<'\n';
            }
        }

        cout<<cost<<'\n';
    }
    return 0;
}
