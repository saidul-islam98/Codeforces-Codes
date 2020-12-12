#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,y,z,mx;
        cin>>x>>y>>z;
        if(x==y && y==z){
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<z<<" "<<"\n";
        }
        else{
            if(x>=y && x>=z){
                mx=x;
            }
            else if(y>=x && y>=z){
                mx=y;
            }
            else{
                mx=z;
            }

            if(x!=y && x!=z && y!=z){
                cout<<"NO\n";
            }
            else if(x==mx && y==mx){
                cout<<"YES\n";
                cout<<z<<" "<<z<<" "<<mx<<"\n";
            }
            else if(x==mx && z==mx){
                cout<<"YES\n";
                cout<<y<<" "<<y<<" "<<mx<<"\n";
            }
            else if(y==mx && z==mx){
                cout<<"YES\n";
                cout<<x<<" "<<x<<" "<<mx<<"\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
