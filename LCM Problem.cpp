#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int l,r,x,y;
        cin>>l>>r;
        if(r%l==0){
            cout<<l<<" "<<r<<'\n';
        }
        else if(r%l!=0){
            if(r/l==1){
                cout<<-1<<" "<<-1<<'\n';
            }
            else{
                x=l;
                y=l*(r/l);
                cout<<x<<" "<<y<<'\n';
            }
        }
    }
    return 0;
}
