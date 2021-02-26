#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int mn=min(k-1,n-k),total;
    if(n-2>0)
        total=(n-2)*3+6+mn;
    else if(n-2==0)
        total=(n-1)*4+2+mn;
    cout<<total;
    return 0;
}
