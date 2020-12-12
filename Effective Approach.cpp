#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    long long int vas=0,pet=0;
    cin>>n;
    int narray[100001];
    for(int i=1;i<=n;i++){
        int l;
        cin>>l;
        narray[l]=i;
    }
    cin>>m;

    while(m>0){
        long long int x;
        cin>>x;
        vas=vas+narray[x];
        pet=pet+n-narray[x]+1;
        m--;
    }

    cout<<vas<<" "<<pet;

    return 0;
}

