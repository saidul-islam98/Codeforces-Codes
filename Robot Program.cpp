#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        if(n==m){
            cout<<n+m<<'\n';
        }
        else{
            int x=2*max(n,m)-1;
            cout<<x<<'\n';
        }
    }
    return 0;
}
