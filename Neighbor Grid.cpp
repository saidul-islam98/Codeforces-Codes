#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        long long int grid[n+1][m+1],ngrid[n+1][m+1]={0};

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>grid[i][j];
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if((i==1 && j==1) || (i==1 && j==m) || (i==n && j==1) || (i==n && j==m)){
                    ngrid[i][j]=2;
                }
                else if((i==1 && j>1 && j<m) || (i>1 && i<n && j==1) || (i==n && j>1 && j<m) || (i>1 && i<n && j==m)){
                    ngrid[i][j]=3;
                }
                else{
                    ngrid[i][j]=4;
                }
            }
        }


//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=m;j++){
//                cout<<ngrid[i][j]<<' ';
//            }
//            cout<<'\n';
//        }

        bool isGood=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(grid[i][j]>0){
                    if(grid[i][j]>ngrid[i][j]){
                        isGood=false;
                        break;
                    }
                }
            }
            if(isGood==false){
                break;
            }
        }
        if(isGood){
            cout<<"YES\n";
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cout<<ngrid[i][j]<<' ';
                }
                cout<<'\n';
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
