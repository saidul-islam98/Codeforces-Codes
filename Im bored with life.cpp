#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,n,f=1;
    cin>>a>>b;

    n=min(a,b);

    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<f;
    return 0;
}
