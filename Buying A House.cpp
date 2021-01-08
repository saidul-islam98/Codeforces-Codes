#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k,d=0;
    cin>>n>>m>>k;

    int h[n+1];
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }

    int l=m,r=m;
    bool flagl=false,flagr=false;
    while(1){
        if(l-1<=0)
            flagl=true;
        else
            l--;
        if(r+1>n)
            flagr=true;
        else
            r++;
        d+=10;
        if(h[l]!=0 && h[l]<=k && l>=1 && flagl==false){
            break;
        }
        else if(h[r]!=0 && h[r]<=k && r<=n && flagr==false){
            break;
        }
    }

    cout<<d;
    return 0;
}
