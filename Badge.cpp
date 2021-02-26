#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+2];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        int vis[n+2]={0};
        vis[i]++;
        for(int j=i;j<=n;j++){
            vis[a[j]]++;
            if(vis[a[j]]>1){
                cout<<a[j]<<' ';
                break;
            }
            j=a[j]-1;
        }
    }
    return 0;
}
