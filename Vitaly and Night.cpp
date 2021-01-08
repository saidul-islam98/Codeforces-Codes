#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][2*m];
    for(int i=0;i<n;i++){
        for(int j=0;j<2*m;j++){
            cin>>a[i][j];
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*m-1;j+=2){
            if((a[i][j]==1 && a[i][j+1]==0) || (a[i][j]==0 && a[i][j+1]==1) || (a[i][j]==1 && a[i][j+1]==1)){
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}
