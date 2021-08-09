#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    long long int a[n+10];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1);
    a[0]=1;
    a[n+1]=1e9+1;

    if(a[k+1]==a[k] || k>n){
        cout<<-1;
    }
    else{
        cout<<a[k];
    }
    return 0;
}
