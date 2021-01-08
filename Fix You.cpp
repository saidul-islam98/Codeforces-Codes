#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,cnt=0;
        cin>>n>>m;

        char c[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==m-1){
                    if(c[i][j]=='R') cnt++;
                }
                else if(i==n-1){
                    if(c[i][j]=='D') cnt++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
