#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int res;

        string s=to_string(b+1);
        int n=s.length();
        res=a*(n-1);
        cout<<res<<'\n';
    }
    return 0;
}
