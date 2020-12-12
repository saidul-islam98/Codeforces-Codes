#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,res=0,comp;
    cin>>n>>k;
    int sc[n];
    for(int i=0;i<n;i++){
        cin>>sc[i];
    }
    comp=sc[k-1];

    for(int i=0;i<n;i++){
        if(sc[i]<comp){
            break;
        }
        else if(sc[i]>0){
            res++;
        }
    }

    cout<<res;

    return 0;
}
