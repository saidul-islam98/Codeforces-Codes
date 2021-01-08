#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;

    if(n==1) cout<<1;
    else if(n==2) cout<<1;
    else if(n%4==0 || (n+1)%4==0) cout<<0;
    else cout<<1;

    return 0;
}
