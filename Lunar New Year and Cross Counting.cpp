#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    char c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }

    if(n<3){
        cout<<0;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(c[i][j]=='X' && (c[i-1][j-1]=='X' && i-1>=0 && j-1>=0) && (c[i-1][j+1]=='X' && i-1>=0 && j+1<n) && (c[i+1][j-1]=='X' && i+1<n && j-1>=0) && (c[i+1][j+1]=='X' && i+1<n && j+1<n)){
                    cnt++;
                }
            }
        }
        cout<<cnt;
    }

    return 0;
}
