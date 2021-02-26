#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        long long int l,r,x,z,ans;
        cin>>l>>r;

        if(l%2!=0 && r%2!=0 && l!=r){
            x=(r-l)/2;
            ans=x+(-1)*r;
        }
        else if(l%2==0 && r%2!=0){
            x=r-l+1;
            z=x/2;
            ans=(-1)*z;
        }
        else if(l%2!=0 && r%2==0){
            x=r-l+1;
            ans=x/2;
        }
        else if(l%2==0 && r%2==0 && l!=r){
            x=(r-l)/2;
            z=(-1)*x;
            ans=r+z;
        }
        else if(l%2==0 && r%2==0 && l==r){
            ans=l;
        }
        else if(l%2!=0 && r%2!=0 && l==r){
            ans=l*(-1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
