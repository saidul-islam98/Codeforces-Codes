#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    if(k<=n){
        cout<<(k-1)/2;
    }
    else{
        long long int mx=n,mn=k-n,X;
        X=(((mx-mn)+1)/2);
        if(X<0)
            cout<<0;
        else
            cout<<X;
    }
    return 0;
}
