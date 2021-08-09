#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n+1][m+1],b[n+1][m+1]={0};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    int cnt=0;
    vector<pair<int,int>> vc;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                if(a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 && j+1<=m && i+1<=n){
                    b[i][j]=1;
                    b[i][j+1]=1;
                    b[i+1][j]=1;
                    b[i+1][j+1]=1;
                    cnt++;
                    vc.push_back(make_pair(i,j));
                }
            }
        }
    }

    bool isSame=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]!=b[i][j]){
                isSame=false;
                break;
            }
        }
        if(isSame==false){
            break;
        }
    }

    if(isSame){
        cout<<cnt<<'\n';
        for(int i=0;i<vc.size();i++){
            cout<<vc[i].first<<' '<<vc[i].second<<'\n';
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}
