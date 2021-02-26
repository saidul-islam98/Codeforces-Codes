#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    char k;
    cin>>n>>m>>k;

    bool a[26]={0};
    char c[n+2][m+2];

    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            c[i][j]='.' ;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>c[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]==k){
                if(c[i-1][j]!=k && c[i-1][j]>='A' && c[i-1][j]<='Z'){
                    a[c[i-1][j]-'A']=true;
                }
                if(c[i+1][j]!=k && c[i+1][j]>='A' && c[i+1][j]<='Z'){
                    a[c[i+1][j]-'A']=true;
                }
                if(c[i][j-1]!=k && c[i][j-1]>='A' && c[i][j-1]<='Z'){
                    a[c[i][j-1]-'A']=true;
                }
                if(c[i][j+1]!=k && c[i][j+1]>='A' && c[i][j+1]<='Z'){
                    a[c[i][j+1]-'A']=true;
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(a[i])cnt++;
    }

    cout<<cnt;
    return 0;
}
