#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a[505][505];
        int b[250005];
        int n,m;
        cin>>n>>m;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int x;
                cin>>x;
                b[x]=j;
            }
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                int x;
                cin>>x;
                a[j][b[x]]=x;
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<a[i][j]<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}
