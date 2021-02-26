#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,n,x;
        cin>>a>>b>>n;

        x=a^b;
        if(n%3==0)
            cout<<a<<'\n';
        else if(n%3==1)
            cout<<b<<'\n';
        else
            cout<<x<<'\n';
    }
    return 0;
}
