#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,l;
        cin>>n;

        k=4*n;
        l=n;
        while(l--){
            cout<<k-2<<" ";
            k-=2;
        }
        cout<<'\n';
    }
    return 0;
}
