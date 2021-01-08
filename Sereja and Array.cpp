#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    long long int a[n+1],add=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    while(m--){
        int q;
        cin>>q;
        if(q==1){
            long long int v,x;
            cin>>v>>x;
            a[v]=x-add;
        }
        else if(q==2){
            int y;
            cin>>y;
            add+=y;
        }
        else{
            int z;
            cin>>z;
            cout<<a[z]+add<<'\n';
        }
    }
    return 0;
}
