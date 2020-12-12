#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    k=t;

    while(t--){
        long long int n,m;
        cin>>n>>m;
        if(n==1){
            cout<<0<<"\n";
        }
        else if(n==2){
            cout<<m<<"\n";
        }
        else if(n>2){
            cout<<m*2<<"\n";
        }
    }
    return 0;
}
