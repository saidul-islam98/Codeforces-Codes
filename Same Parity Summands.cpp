#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        long long int oddp=n-k+1;
        long long int evnp=n-2*k+2;

        if(oddp>0 && oddp%2==1){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<1<<' ';
            }
            cout<<oddp<<'\n';
        }
        else if(evnp>0 && evnp%2==0){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<2<<' ';
            }
            cout<<evnp<<'\n';
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
