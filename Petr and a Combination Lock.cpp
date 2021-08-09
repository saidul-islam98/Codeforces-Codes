#include<bits/stdc++.h>

using namespace std;

int a[20],n;

void dfs(int i,int sum){
    if(i>n){
        if(sum%360==0){
            cout<<"YES";
            exit(0);
        }
        return;
    }
    dfs(i+1,sum+a[i]);
    dfs(i+1,sum-a[i]);
}

int main(){
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dfs(1,0);
    cout<<"NO";

    return 0;
}
