#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int x[n],y[n],counter[100005]={0},home[n],away[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        counter[x[i]]++;
    }

    for(int i=0;i<n;i++){
        home[i]=n-1;
        home[i]+=counter[y[i]];
        away[i]=2*(n-1)-home[i];
    }

    for(int i=0;i<n;i++){
        cout<<home[i]<<' '<<away[i]<<'\n';
    }
    return 0;
}
