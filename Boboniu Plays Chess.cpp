#include<bits/stdc++.h>

using namespace std;

int n,m,o,p;

void chess(int i,int j){
    cout<<(i+o-2)%n+1<<' '<<(j+p-2)%m+1<<'\n';
}

int main(){
    cin>>n>>m>>o>>p;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=m;j++){
                chess(i,j);
            }
        }
        else{
            for(int j=m;j>=1;j--){
                chess(i,j);
            }
        }
    }
    return 0;
}
