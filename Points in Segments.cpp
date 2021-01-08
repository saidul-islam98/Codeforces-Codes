#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,cnt=0;
    cin>>n>>m;

    bool b[m+1];
    memset(b,false,sizeof(b));

    while(n--){
        int x,y;
        cin>>x>>y;
        for(int i=x;i<=y;i++){
            if(b[i]==false){
                b[i]=true;
                cnt++;
            }
        }
    }

    cout<<m-cnt<<'\n';
    for(int i=1;i<=m;i++){
        if(b[i]==false){
            cout<<i<<' ';
        }
    }
    return 0;
}
