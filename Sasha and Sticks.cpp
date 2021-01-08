#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    if(k==1){
        if(n%2!=0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else{
        long long int intr=n/k;
        if(intr%2==0) cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}
