#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,l,r;
    cin>>n;

    if(n%2==0){
        r=8;
        l=n-r;
    }
    else{
        r=9;
        l=n-r;
    }

    cout<<l<<" "<<r;
    return 0;
}
