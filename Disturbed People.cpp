#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        if(a[i]==0 && i>1 && i<n){
            if(a[i-1]==1 && a[i+1]==1){
                a[i+1]=0;
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}
