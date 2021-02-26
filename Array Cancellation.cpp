#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n];
        long long int coins=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            coins=max(0LL,coins+a[i]);
        }
        cout<<coins<<'\n';
    }
    return 0;
}
