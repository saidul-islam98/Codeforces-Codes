#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int a[102]={0};
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        a[x]++;
    }

    int res=0;
    for(int i=1;i<=100;i++){
        int cnt=0;
        for(int j=0;j<=100;j++){
            cnt+=(a[j]/i);
        }
        if(cnt>=n){
            res=max(res,i);
        }
    }

    cout<<res;
    return 0;
}
