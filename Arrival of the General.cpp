#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,total,flag=0;
    cin>>n;
    int solja[n];
    for(int i=0;i<n;i++){
        cin>>solja[i];
    }
    int mx=-9999, mn=9999, mxposf, mnposf, mxposl, mnposl;
    for(int i=0;i<n;i++){
        if(solja[i]>mx){
            mx=solja[i];
            mxposl=i;
        }
        if(solja[i]<=mn){
            if(solja[i]==mn){
                mnposf=i;
            }
            mn=solja[i];
            mnposl=i;
        }
        cnt=i;
    }

    if(n==2 && mx==mn){
        total=0;
    }
    else if(n==2 && mn!=mx && mxposl<mnposl){
        total=0;
    }
    else if(n==2 && mn!=mx && mxposl>mnposl){
        total=1;
    }
    else if(mxposl<mnposl){
        total=mxposl+(cnt-mnposl);
    }
    else if(mxposl>mnposl) {
        total=mxposl+(cnt-mnposl-1);
    }
    cout<<total;
    return 0;
}


