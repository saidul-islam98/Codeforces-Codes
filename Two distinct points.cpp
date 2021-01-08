#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        if(l1!=l2){
            cout<<l1<<" "<<l2<<'\n';
        }
        else if(l1==l2 && r1!=r2){
            cout<<r1<<" "<<r2<<'\n';
        }
        else if(l1==l2 && r1==r2){
            cout<<l1<<" "<<r2<<'\n';
        }
    }
    return 0;
}
