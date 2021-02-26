#include<bits/stdc++.h>

using namespace std;

int countSetBits(int z)
{
    int cnt=0;
    while(z){
        cnt+=z&1;
        z>>=1;
    }
    return cnt;
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    int fedor,cntf=0;
    cin>>fedor;

    for(int i=0;i<m;i++){
        int xr=fedor^a[i];
        int set_bt=countSetBits(xr);
        if(set_bt<=k){
            cntf++;
        }
    }
    cout<<cntf;
    return 0;
}
