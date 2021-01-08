#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,avg,cnt=0;
    cin>>n;
    k=n/2;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cnt+=a[i];
    }

    avg=cnt/k;

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]+a[j]==avg){
                cout<<i<<" "<<j<<'\n';
                a[j]=-101;
                break;
            }
        }
    }
    return 0;
}
