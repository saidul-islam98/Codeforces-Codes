#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    if(n==a+b){
        cout<<1;
    }
    else{
        int res=0;
        for(int i=1;i<n;i++){
            res=max(res,min(a/i, b/(n-i)));
        }

        cout<<res;
    }
    return 0;
}
