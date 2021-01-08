#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,a,b;
        cin>>n>>a>>b;

        if(n==1){
            cout<<a<<'\n';
        }
        else{
            if(2*a<=b){
                cout<<n*a<<'\n';
            }
            else{
                if(n%2==0) cout<<(n/2)*b<<'\n';
                else{
                    cout<<((n-1)/2)*b+a<<'\n';
                }
            }
        }

    }
    return 0;
}
