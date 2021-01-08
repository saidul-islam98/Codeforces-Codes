#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,m,r,c;
        cin>>n>>m>>r>>c;
        long long int frow=1,fcol=1,ftotal,ltotal;
        ftotal=max(r-1,n-r);
        ltotal=max(c-1,m-c);
        long long int t=ftotal+ltotal;
        cout<<t<<'\n';
    }
    return 0;
}
