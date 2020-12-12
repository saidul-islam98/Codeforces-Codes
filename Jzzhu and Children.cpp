#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,idx,mx=-9999;
    cin>>n>>m;
    int x[n];
    int val[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]%m!=0){
            val[i]=x[i]/m+1;
        }
        else{
            val[i]=x[i]/m;
        }

    }
    for(int i=0;i<n;i++){
        if(val[i]>mx){
            mx=val[i];
        }
    }

    for(int i=n-1;i>=0;i--){
        if(val[i]==mx){
            idx=i+1;
            break;
        }
    }

    cout<<idx;

    return 0;
}
