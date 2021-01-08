#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        double l,r,a;
        cin>>l>>r;

        a=r+1;

        if(l>=a/2 && r>=a/2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
