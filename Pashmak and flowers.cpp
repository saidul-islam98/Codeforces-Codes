#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,mx,mn,mxcnt=0,mncnt=0, mul, diff;
    cin>>n;
    long long int bt[n];
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }

    sort(bt, bt+n, greater<int>());
    mx=bt[0];
    mn=bt[n-1];

    for(int i=0;i<n;i++){
        if(mx!=mn){
            if(bt[i]==mx){
                mxcnt++;
            }
            else if(bt[i]==mn){
                mncnt++;
            }
        }
        else{
            mxcnt++;
            mncnt++;
        }

    }

    if(mx==mn){
        diff=0;
        mul=(n*(n-1))/2;
    }
    else{
        diff=mx-mn;
        mul=mncnt*mxcnt;
    }

    cout<<diff<<" "<<mul;

    return 0;
}


