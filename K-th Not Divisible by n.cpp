#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        long long int c=k/(n-1);
        k-=c*(n-1);
        if(k%(n-1)){
            cout<<n*(c)+k<<'\n';
        }
        else{
            cout<<n*(c)+k-1<<'\n';
        }
    }
    return 0;
}
