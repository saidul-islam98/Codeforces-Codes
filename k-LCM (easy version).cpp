#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a,b,c;
        if(n%2){
            a=1;
            n-=1;
            b=n/2;
            c=n/2;
        }
        else{
            if((n/2)%2==0){
                a=n/2;
                n/=2;
                b=n/2;
                c=n/2;
            }
            else{
                a=2;
                n-=2;
                b=n/2;
                c=n/2;
            }
        }

        cout<<a<<' '<<b<<' '<<c<<'\n';
    }
    return 0;
}
