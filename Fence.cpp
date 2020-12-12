#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,mn=99999999,idx,init,sum=0,cnt=0;
    cin>>n>>k;
    long long int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<k;i++){
        sum=sum+ar[i];
        cnt++;
    }
    if(sum<mn){
        mn=sum;
        idx=cnt-k;
    }
    init=ar[0];
    for(int i=1;i<n-k+1;i++){
        sum=sum+ar[i+k-1]-init;
        if(sum<mn){
            mn=sum;
            idx=i;
        }
        init=ar[i];
    }

    cout<<idx+1;
    return 0;
}
