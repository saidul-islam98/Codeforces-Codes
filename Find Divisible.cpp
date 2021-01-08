#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int l,r;
        cin>>l>>r;

        if(r%l==0){
            cout<<l<<" "<<r<<'\n';
        }
        else{
            r=r-(r%l);
            cout<<l<<' '<<r<<'\n';
        }
    }
    return 0;
}
