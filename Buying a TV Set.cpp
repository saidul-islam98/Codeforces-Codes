#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,x,y,divx,divy;
    cin>>a>>b>>x>>y;

    long long int gccd=__gcd(x,y);
    x=x/gccd;
    y=y/gccd;

    if(x>a || y>b){
        cout<<0;
    }
    else{
        divx=a/x;
        divy=b/y;

        long long int mn=min(divx,divy);
        cout<<mn;
    }
    return 0;
}
