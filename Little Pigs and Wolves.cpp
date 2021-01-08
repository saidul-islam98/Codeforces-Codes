#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,cnt=0;
    cin>>n>>m;

    char a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='W'){
                if(i==0 && j==0){
                    if(a[i][j+1]=='P'){
                        a[i][j+1]='.';
                        cnt++;
                    }
                    else if(a[i+1][j]=='P'){
                        a[i+1][j]='.';
                        cnt++;
                    }
                }
                else if(i==0 && j==m-1){
                    if(a[i][j-1]=='P'){
                        a[i][j-1]='.';
                        cnt++;
                    }
                    else if(a[i+1][j]=='P'){
                        a[i+1][j]='.';
                        cnt++;
                    }
                }
                else if(i==0){
                    if(a[i][j-1]=='P'){
                        a[i][j-1]='.';
                        cnt++;
                    }
                    else if(a[i][j+1]=='P'){
                        a[i][j+1]='.';
                        cnt++;
                    }
                    else if(a[i+1][j]=='P'){
                        a[i+1][j]='.';
                        cnt++;
                    }
                }
                else if(i==n-1 && j==0){
                    if(a[i-1][j]=='P'){
                        a[i-1][j]='.';
                        cnt++;
                    }
                    else if(a[i][j+1]=='P'){
                        a[i][j+1]='.';
                        cnt++;
                    }
                }
                else if(j==0){
                    if(a[i-1][j]=='P'){
                        a[i-1][j]='.';
                        cnt++;
                    }
                    else if(a[i+1][j]=='P'){
                        a[i+1][j]='.';
                        cnt++;
                    }
                    else if(a[i][j+1]=='P'){
                        a[i][j+1]='.';
                        cnt++;
                    }
                }
                else if(i==n-1 && j==m-1){
                    if(a[i][j-1]=='P'){
                        a[i][j-1]='.';
                        cnt++;
                    }
                    else if(a[i-1][j]=='P'){
                        a[i-1][j]='.';
                        cnt++;
                    }
                }
                else if(i==n-1){
                    if(a[i][j-1]=='P'){
                        a[i][j-1]='.';
                        cnt++;
                    }
                    else if(a[i][j+1]=='P'){
                        a[i][j+1]='.';
                        cnt++;
                    }
                    else if(a[i-1][j]=='P'){
                        a[i-1][j]='.';
                        cnt++;
                    }
                }
                else if(j==m-1){
                    if(a[i-1][j]=='P'){
                        a[i-1][j]='.';
                        cnt++;
                    }
                    else if(a[i+1][j]=='P'){
                        a[i+1][j]='.';
                        cnt++;
                    }
                    else if(a[i][j-1]=='P'){
                        a[i][j-1]='.';
                        cnt++;
                    }
                }
                else{
                    if(a[i-1][j]=='P'){
                        a[i-1][j]='.';
                        cnt++;
                    }
                    else if(a[i+1][j]=='P'){
                        a[i+1][j]='.';
                        cnt++;
                    }
                    else if(a[i][j-1]=='P'){
                        a[i][j-1]='.';
                        cnt++;
                    }
                    else if(a[i][j+1]=='P'){
                        a[i][j+1]='.';
                        cnt++;
                    }
                }
            }
        }
    }

    cout<<cnt;

    return 0;
}
