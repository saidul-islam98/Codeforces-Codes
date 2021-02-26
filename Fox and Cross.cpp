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

    for(int i=0;i<n;i++){
        if(i>0 && i<n-1){
            for(int j=0;j<n;j++){
                if(c[i][j]=='#'){
                    if(c[i][j-1]=='#' && c[i][j+1]=='#' && c[i-1][j]=='#' && c[i+1][j]=='#'){
                        c[i][j]='.';
                        c[i][j-1]='.';
                        c[i][j+1]='.';
                        c[i-1][j]='.';
                        c[i+1][j]='.';
                    }
                }
            }
        }
    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cout<<c[i][j];
//        }
//        cout<<'\n';
//    }

    bool isPossible=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]!='.'){
                isPossible=false;
                break;
            }
        }
        if(isPossible==false){
            break;
        }
    }

    if(isPossible){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
