#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p;
        cin>>n;

        p=((n+3)/4);
        string s="";
        for(int i=0;i<n-p;i++){
            s+='9';
        }
        for(int i=0;i<p;i++){
            s+='8';
        }

        cout<<s<<'\n';
    }

    return 0;
}
