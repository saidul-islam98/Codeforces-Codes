#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,t,d;
        cin>>x;

        t=x%14;
        d=floor(x/14);

        if(d>=1 && t>=1 && t<=6)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
