#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,z;
    cin>>t;
    z=t;

    vector<long long int> rs;
    while(t--){
        long long int x,y,n,k;
        cin>>x>>y>>n;

        if(n<x){
            cout<<y<<endl;
        }
        else{
            if(n%x==y){
                cout<<n<<endl;
            }
            else if(n/x==0){
                cout<<"0"<<endl;
            }
            else{
                k=n/x;
                k=x*k;
                if(k+y<n){
                    cout<<k+y<<endl;
                }
                else{
                    cout<<k-(x-y)<<endl;
                }
            }
        }
    }
    return 0;
}
