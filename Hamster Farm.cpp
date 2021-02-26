#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,t,k,i=0,idx,numbox,mxbox=-99999999999,val;
    cin>>n>>k;

    t=k;
    while(t--){
        long long int x,div;
        cin>>x;
        div=n/x;
        val=div*x;
        i++;
        if(mxbox<val){
            mxbox=val;
            numbox=div;
            idx=i;
        }
    }

    cout<<idx<<' '<<numbox;

    return 0;
}
