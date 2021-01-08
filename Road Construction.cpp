#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k,idx;
    cin>>n>>m;
    k=m;
    bool ci[n+1];
    memset(ci,false,sizeof(ci));

    while(k--){
        int x,y;
        cin>>x>>y;
        ci[x]=true;
        ci[y]=true;
    }

    for(int i=1;i<=n;i++){
        if(ci[i]==false){
            idx=i;
            break;
        }
    }

    cout<<n-1<<'\n';
    for(int i=1;i<=n;i++){
        if(i!=idx){
            cout<<i<<" "<<idx<<'\n';
        }
    }
    return 0;
}
