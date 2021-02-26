#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,cnt=0;
        cin>>n;
        while(n>1){
            long long int x,twr;
            x=floor((-1+sqrt(1+24*n))/6);
            twr=2+((x-1)*(3*x+4))/2;
            n-=twr;
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
