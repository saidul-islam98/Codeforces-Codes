#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,k,total;
        cin>>a>>b>>k;

        if(k==1){
            cout<<a<<'\n';
        }
        else if(k==2){
            cout<<a-b<<'\n';
        }
        else{
            if(k%2==0){
                k=k/2;
                total=(a-b)*k;
            }
            else{
                k=(k-1)/2;
                total=(a-b)*k+a;
            }
            cout<<total<<'\n';
        }
    }

    return 0;
}
