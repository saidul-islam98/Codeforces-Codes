#include<bits/stdc++.h>

using namespace std;

int main(){
    int color[4], cnt=0;
    bool unq[4];
    for(int i=0;i<4;i++){
        cin>>color[i];
        unq[i]=true;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            if(color[i]==color[j]){
                unq[i]=false;
            }
        }
    }
    for(int i=0;i<4;i++){
        if(unq[i]==false){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
