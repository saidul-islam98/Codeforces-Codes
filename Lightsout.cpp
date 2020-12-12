#include<bits/stdc++.h>

using namespace std;

int main(){
    int ltinit[3][3];
    bool ltpd[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ltinit[i][j];
            ltpd[i][j]=true;
        }
    }

    if(ltinit[0][0]%2==1){
        ltpd[0][0]=!ltpd[0][0];
        ltpd[0][1]=!ltpd[0][1];
        ltpd[1][0]=!ltpd[1][0];
    }
    if(ltinit[0][1]%2==1){
        ltpd[0][1]=!ltpd[0][1];
        ltpd[0][0]=!ltpd[0][0];
        ltpd[0][2]=!ltpd[0][2];
        ltpd[1][1]=!ltpd[1][1];
    }
    if(ltinit[0][2]%2==1){
        ltpd[0][2]=!ltpd[0][2];
        ltpd[0][1]=!ltpd[0][1];
        ltpd[1][2]=!ltpd[1][2];
    }
    if(ltinit[1][0]%2==1){
        ltpd[1][0]=!ltpd[1][0];
        ltpd[0][0]=!ltpd[0][0];
        ltpd[1][1]=!ltpd[1][1];
        ltpd[2][0]=!ltpd[2][0];
    }
    if(ltinit[1][1]%2==1){
        ltpd[1][1]=!ltpd[1][1];
        ltpd[0][1]=!ltpd[0][1];
        ltpd[1][0]=!ltpd[1][0];
        ltpd[1][2]=!ltpd[1][2];
        ltpd[2][1]=!ltpd[2][1];
    }
    if(ltinit[1][2]%2==1){
        ltpd[1][2]=!ltpd[1][2];
        ltpd[0][2]=!ltpd[0][2];
        ltpd[1][1]=!ltpd[1][1];
        ltpd[2][2]=!ltpd[2][2];

    }
    if(ltinit[2][0]%2==1){
        ltpd[2][0]=!ltpd[2][0];
        ltpd[1][0]=!ltpd[1][0];
        ltpd[2][1]=!ltpd[2][1];
    }
    if(ltinit[2][1]%2==1){
        ltpd[2][1]=!ltpd[2][1];
        ltpd[2][0]=!ltpd[2][0];
        ltpd[1][1]=!ltpd[1][1];
        ltpd[2][2]=!ltpd[2][2];
    }
    if(ltinit[2][2]%2==1){
        ltpd[2][2]=!ltpd[2][2];
        ltpd[2][1]=!ltpd[2][1];
        ltpd[1][2]=!ltpd[1][2];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(ltpd[i][j]) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
