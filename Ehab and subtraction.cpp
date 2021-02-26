#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    long long int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);

    a[0]=0;
    for(int i=1;i<=k;i++){
        if(i>n){
            cout<<0<<'\n';
        }
        else{
            if(a[i]==a[i-1]){
                k++;
                continue;
            }
            else
                cout<<a[i]-a[i-1]<<'\n';
        }
    }

    return 0;
}
