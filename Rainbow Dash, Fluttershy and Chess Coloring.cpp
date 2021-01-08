#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        if(n==1) cout<<1<<'\n';
        else if(n==2) cout<<2<<'\n';
        else{
            long long int x;
            x=n/2+1;
            cout<<x<<'\n';
        }
    }
    return 0;
}
