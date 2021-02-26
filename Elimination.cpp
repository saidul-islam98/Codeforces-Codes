#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int mx=max(a+b,c+d);
        cout<<mx<<'\n';
    }
    return 0;
}
