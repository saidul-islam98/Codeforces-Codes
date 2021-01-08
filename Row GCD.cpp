#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    long long int a[n+1],b[m+1],G=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=m;i++){
        cin>>b[i];
    }

    for(int i=2;i<=n;i++){
        G=__gcd(G,abs(a[i]-a[1]));
    }

    for(int i=1;i<=m;i++){
        cout<<__gcd(a[1]+b[i],G)<<' ';
    }

    return 0;
}
