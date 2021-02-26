#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,cnt=0;
    cin>>n>>k;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        if(a[i]){
            int d=i-k;
            int j=k-d;
            if(j<1 || j>n || a[i]==a[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
