#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int a[n+1],b[50005]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]=1;
    }

    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        if(b[i]==1){
            cnt++;
        }
    }

    cout<<n-cnt;
    return 0;
}
