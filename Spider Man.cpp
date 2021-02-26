#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,k=0;
    cin>>n;

    t=n;
    int x=2;

    while(t--){
        int z;
        cin>>z;
        k^=z&1^1;
        cout<<x-k<<'\n';
    }
    return 0;
}
