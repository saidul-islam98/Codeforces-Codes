#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    string fs[25],ss[25];
    for(int i=1;i<=n;i++){
        cin>>fs[i];
    }

    for(int i=1;i<=m;i++){
        cin>>ss[i];
    }

    int t;
    cin>>t;

    while(t--){
        int x,a,b;
        cin>>x;

        a=x%n;
        if(a==0) a=n;
        b=x%m;
        if(b==0) b=m;

        cout<<fs[a]+ss[b]<<'\n';
    }
    return 0;
}
