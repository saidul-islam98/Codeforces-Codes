#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,res=1e9;
        cin>>x;

        for(int i=1;i*i<=x;i++){
            res=min(res,i-1+((x-i)+i-1)/i);
        }
        cout<<res<<'\n';
    }
    return 0;
}
