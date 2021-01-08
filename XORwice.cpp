#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,x,mn;
        cin>>a>>b;

        x=(a^(a&b))+(b^(a&b));
        cout<<x<<'\n';
    }
    return 0;
}
