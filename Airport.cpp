#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int mnseat[m],mxseat[m],mx=0,mn=0;

    for(int i=0;i<m;i++){
        cin>>mnseat[i];
        mxseat[i]=mnseat[i];
    }

    sort(mnseat, mnseat+m);
    sort(mxseat, mxseat+m, greater<int>());

    int numba=mnseat[0],k=0;
    for(int i=0;i<n;i++){
        mn+=numba;
        numba-=1;
        if(numba==0){
            numba=mnseat[++k];
        }
    }

    while(n--){
        mx+=mxseat[0];
        mxseat[0]-=1;
        for(int i=1;i<m;i++){
            if(mxseat[i]<=mxseat[i-1]){
                break;
            }
            swap(mxseat[i],mxseat[i-1]);
        }
    }

    cout<<mx<<" "<<mn;

    return 0;
}
