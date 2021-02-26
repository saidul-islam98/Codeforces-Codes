#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b+1,b+n+1,greater<int>());

    int sum=1;
    for(int i=1;i<n;i++){
        sum+=(b[i+1]*i+1);
    }

    cout<<sum<<'\n';

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[j]==b[i]){
                a[j]=-1;
                cout<<j<<' ';
            }
        }
    }
    return 0;
}
