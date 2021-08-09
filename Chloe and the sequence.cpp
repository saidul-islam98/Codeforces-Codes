#include<bits/stdc++.h>

using namespace std;

long long int sequence(long long int l,long long int r,long long int k,long long int n){
    long long int m=l+(r-l)/2;
    if(k<m)
        return sequence(l,m-1,k,n-1);
    else if(k>m)
        return sequence(m+1,r,k,n-1);
    else{
        return n;
    }
}

int main(){
    long long int n,k;
    cin>>n>>k;

    long long int first=1;

    for(int i=1;i<n;i++){
        first=first*2+1;
    }

    cout<<sequence(1,first,k,n);
    return 0;
}
