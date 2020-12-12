#include<bits/stdc++.h>

using namespace std;

bool check[100001];
int a[100000], ans[100001];

int main(){
    int n,t;
    cin>>n>>t;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n-1;i>=0;i--){
        if(!check[a[i]]){
            check[a[i]]=1;
            ans[i]=ans[i+1]+1;
        }
        else{
            ans[i]=ans[i+1];
        }
    }
    while(t--) {
        int val;
        cin>>val;
        cout<<ans[val-1]<<"\n";
    }
    return 0;
}
