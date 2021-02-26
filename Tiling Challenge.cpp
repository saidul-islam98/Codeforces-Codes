#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    char c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }

    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]=='.'){
                if((c[i][j-1]=='.' && j-1>=0) && (c[i-1][j]=='.' && i-1>=0) && (c[i+1][j]=='.' && i+1<n) && (c[i][j+1]=='.' && j+1<n)){
                    c[i][j-1]='#';
                    c[i-1][j]='#';
                    c[i+1][j]='#';
                    c[i][j+1]='#';
                    c[i][j]='#';
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]!='#'){
                flag=false;
                break;
            }
        }
    }
    if(flag==false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
