#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int l,r;
    cin>>l>>r;

    cout<<"YES\n";
    while(l<r){
        cout<<l<<' ';
        l+=1;
        cout<<l<<'\n';
        l+=1;
    }
    return 0;
}
