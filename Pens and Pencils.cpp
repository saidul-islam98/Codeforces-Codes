#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d,k,x,y;
        cin>>a>>b>>c>>d>>k;

        if(a%c==0){
            x=a/c;
        }
        else{
            x=(a+(c-a%c))/c;
        }

        if(b%d==0){
            y=b/d;
        }
        else{
            y=(b+(d-b%d))/d;
        }

        if((x+y)<=k) cout<<x<<" "<<y<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}
