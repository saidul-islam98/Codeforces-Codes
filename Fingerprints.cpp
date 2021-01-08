#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t;
    cin>>n>>m;
    t=m;
    bool b[10];
    memset(b,false,sizeof(b));
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    while(t--){
        int x;
        cin>>x;
        if(b[x]==false){
            b[x]=true;
        }
    }

    for(int i=0;i<n;i++){
        if(b[a[i]]==true){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
