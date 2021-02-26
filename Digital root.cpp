#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int k,x;
        cin>>k>>x;

        if(k==1){
            cout<<x<<'\n';
        }
        else{
            k--;
            while(k--){
                x=x+10-1;
            }
            cout<<x<<'\n';
        }
    }
    return 0;
}
