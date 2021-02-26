#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int res=n/2+1;
    cout<<res<<'\n';

    for(int i=1;i<=res;i++){
        cout<<1<<' '<<i<<'\n';
    }
    for(int i=2;i<=n-res+1;i++){
        cout<<res<<' '<<i<<'\n';
    }
    return 0;
}
