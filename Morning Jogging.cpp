#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int a[101][101];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }

        for(int i=1;i<=n;i++){
            sort(a[i]+1,a[i]+m+1);
        }

        for(int i=m;i>=2;i--){
            int x=1;
            for(int j=1;j<=n;j++){
                if(a[j][1]<a[x][1]){
                    x=j;
                }
            }
            rotate(a[x]+1,a[x]+2,a[x]+i+1);
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
