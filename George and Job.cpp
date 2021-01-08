#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k,t;
    cin>>n>>m>>k;
    t=k;
    long long int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1,greater<int>());
    long long int sum=0;
    int c=1;
    while(t--){
        sum+=(a[c]+a[c+1]);
        c+=2;
    }
    cout<<sum;
    return 0;
}
