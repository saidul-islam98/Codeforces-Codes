#include<bits/stdc++.h>

using namespace std;

int main(){
    char init[4][4];
    bool check[4][4],flag=true;
    int cnthsh=0, cntdot=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            char ch;
            cin>>ch;
            init[i][j]=ch;
            if(ch=='#'){
                check[i][j]=true;
                cnthsh++;
            }
            else{
                check[i][j]=false;
                cntdot++;
            }
        }
    }

    if(cnthsh>8 || cntdot>8){
        cout<<"YES";
        return 0;
    }
    else if(cnthsh==8 && cntdot==8){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i==0 && j==0){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==0 && j==1){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==0 && j==2){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==1 && j==0){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==1 && j==1){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==1 && j==2){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==2 && j==0){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==2 && j==1){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
                else if(i==2 && j==2){
                    char ch=init[i][j];
                    if(init[i][j+1]==ch && init[i+1][j]==ch && (init[i+1][j+1]==ch || init[i+1][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i+1][j+1]==ch && init[i+1][j]==ch && (init[i][j+1]==ch || init[i][j+1]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else if(init[i][j+1]==ch && init[i+1][j+1]==ch && (init[i+1][j]==ch || init[i+1][j]!=ch)){
                        cout<<"YES";
                        return 0;
                    }
                    else{
                        flag=false;
                    }
                }
            }
        }
    }
    if(flag==false){
        cout<<"NO";
    }

    return 0;
}
