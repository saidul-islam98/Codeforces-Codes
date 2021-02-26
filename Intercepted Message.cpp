#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[1000007]={0};
    int n,m,t,k;
    cin>>n>>m;
    t=n;
    k=m;
    int sum=0,cnt=0;
    while(t--){
        int x;
        cin>>x;
        sum+=x;
        a[sum]=1;
    }

    sum=0;
    while(k--){
        int y;
        cin>>y;
        sum+=y;
        if(a[sum]==1){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
