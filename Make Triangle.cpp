#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<0<<'\n';
    }
    else{
        int mx,mn,md;
        mx=max(a,b);
        mx=max(mx,c);
        mn=min(a,b);
        mn=min(mn,c);

        if((mx==a && mn==b) || (mx==b && mn==a)){
            md=c;
        }
        else if((mx==a && mn==c) || (mx==c && mn==a)){
            md=b;
        }
        else{
            md=a;
        }

        cout<<(mx-(md+mn))+1;
    }
    return 0;
}
