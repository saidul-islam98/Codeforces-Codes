#include<bits/stdc++.h>

using namespace std;

long long int prod(long long int n){
    long long int mn=10,mx=0;

    while(n){
        long long int k=n%10;
        mn=min(mn,k);
        mx=max(mx,k);
        n/=10;
    }
    return mn*mx;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;
        for(int i=0;i<k-1;i++){
            long long int prods=prod(n);
            if(prods==0)
                break;
            n+=prods;
        }
        cout<<n<<'\n';
    }
    return 0;
}
