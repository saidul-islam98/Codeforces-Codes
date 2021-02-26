#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n],b[n],c[n],suma=0,sumb=0,sumc=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        suma+=a[i];
    }

    for(int i=0;i<n-1;i++){
        cin>>b[i];
        sumb+=b[i];
    }

    for(int i=0;i<n-2;i++){
        cin>>c[i];
        sumc+=c[i];
    }

    cout<<suma-sumb<<'\n'<<sumb-sumc;
    return 0;
}
