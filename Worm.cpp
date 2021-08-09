#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a[1000007],i,x=1,q;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>q;
        while(q--){
            a[x]=i;
            x++;
        }
    }
    cin>>m;
    while(m--){
        cin>>q;
        cout<<a[q]<<'\n';
    }

    return 0;
}
