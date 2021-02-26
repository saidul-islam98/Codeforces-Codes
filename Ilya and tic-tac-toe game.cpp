#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=4;
    char c[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>c[i][j];
        }
    }

    bool isWin=false;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(c[i][j]=='x'){
                if(c[i][j+1]=='x' && c[i][j+2]=='.' && j+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i][j+1]=='.' && c[i][j+2]=='x' && j+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i][j-1]=='x' && c[i][j+1]=='.' && j+1<n && j-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i][j-1]=='.' && c[i][j+1]=='x' && j+1<n && j-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i][j-2]=='x' && c[i][j-1]=='.' && j-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i][j-2]=='x' && c[i][j-1]=='.' && j-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i+1][j]=='x' && c[i+2][j]=='.' && i+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i+1][j]=='.' && c[i+2][j]=='x' && i+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j]=='x' && c[i+1][j]=='.' && i+1<n && i-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j]=='.' && c[i+1][j]=='x' && i+1<n && i-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-2][j]=='x' && c[i-1][j]=='.' && i-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-2][j]=='.' && c[i-1][j]=='x' && i-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i+1][j+1]=='x' && c[i+2][j+2]=='.' && i+2<n && j+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i+1][j+1]=='.' && c[i+2][j+2]=='x' && i+2<n && j+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j-1]=='x' && c[i+1][j+1]=='.' && i+1<n && j+1<n && i-1>=0 && j-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j-1]=='.' && c[i+1][j+1]=='x' && i+1<n && j+1<n && i-1>=0 && j-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j-1]=='x' && c[i-2][j-2]=='.' && i-2>=0 && j-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j-1]=='.' && c[i-2][j-2]=='x' && i-2>=0 && j-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i+1][j-1]=='x' && c[i+2][j-2]=='.' && i+2<n && j-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i+1][j-1]=='.' && c[i+2][j-2]=='x' && i+2<n && j-2>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j+1]=='x' && c[i+1][j-1]=='.' && i+1<n && j+1<n && i-1>=0 && j-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j+1]=='.' && c[i+1][j-1]=='x' && i+1<n && j+1<n && i-1>=0 && j-1>=0){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j+1]=='x' && c[i-2][j+2]=='.' && i-2>=0 && j+2<n){
                    isWin=true;
                    break;
                }
                else if(c[i-1][j+1]=='.' && c[i-2][j+2]=='x' && i-2>=0 && j+2<n){
                    isWin=true;
                    break;
                }
            }
        }
        if(isWin){
            break;
        }
    }
    if(isWin){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
