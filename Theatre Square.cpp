#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m,a,mx,mn,x,y;
    cin>>n>>m>>a;

    mx=max(n,m);
    mn=min(n,m);

    if(mx%a==0){
        x=mx/a;
    }
    else{
        x=(mx+(a-(mx%a)))/a;
    }

    if(mn%a==0){
        y=mn/a;
    }
    else{
        y=(mn+(a-(mn%a)))/a;
    }


    if(x*y==0)
        cout<<1;
    else
        cout<<x*y;
    return 0;
}
