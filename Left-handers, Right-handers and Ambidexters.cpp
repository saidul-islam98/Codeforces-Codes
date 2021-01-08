#include<bits/stdc++.h>

using namespace std;

int main(){
    int l,r,amb,cnt=0;
    cin>>l>>r>>amb;

    int mx=max(l,r);
    int mn=min(l,r);

    if(mx==mn){
        cnt=mx+mn;
        while(amb>=2){
            amb-=2;
            cnt+=2;
        }
    }
    else{
        cnt+=(2*mn);
        mx-=mn;

        while(mx>0 && amb>0){
            mx--;
            amb--;
            cnt+=2;
        }

        while(amb>=2){
            amb-=2;
            cnt+=2;
        }
    }

    cout<<cnt;

    return 0;
}
