#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,a,b,tmp;
        cin>>n>>x>>a>>b;

        if(a<b){
            tmp=a;
            a=b;
            b=tmp;
        }
        if((b-x)==1){
            cout<<a-1<<'\n';
        }
        else if((b-x)<1){
            int m=b-1;
            x=x-m;
            if((a+x)>=n){
                cout<<n-1<<'\n';
            }
            else{
                cout<<(a+x)-1<<'\n';
            }
        }
        else{
            int z=(b-x);
            cout<<a-z<<'\n';
        }
    }

    return 0;
}
