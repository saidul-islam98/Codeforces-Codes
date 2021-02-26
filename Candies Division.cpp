#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k,kd,total;
        cin>>n>>k;

        total=n-n%k+min(n%k,(k/2));
        cout<<total<<'\n';
    }
    return 0;
}
