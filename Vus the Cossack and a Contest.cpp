#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k,mn;
    cin>>n>>m>>k;

    if(m>=k){
        mn=k;
    }
    else{
        mn=m;
    }

    if(mn>=n){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
