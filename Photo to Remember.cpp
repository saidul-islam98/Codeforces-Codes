#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;

    t=n;
    int W[200005],H[200005],h[200005],sumW=0,i=1;
    while(t--){
        int x,y;
        cin>>x>>y;
        W[i]=x;
        H[i]=y;
        h[i]=y;
        sumW+=x;
        i++;
    }

    sort(h+1,h+n+1,greater<int>());
    int fmax=h[1],smax=h[2],pix,intrsum;

    for(int i=1;i<=n;i++){
        if(H[i]==fmax){
            intrsum=sumW-W[i];
            pix=intrsum*smax;
            cout<<pix<<' ';
        }
        else{
            intrsum=sumW-W[i];
            pix=intrsum*fmax;
            cout<<pix<<' ';
        }
    }
    return 0;
}
