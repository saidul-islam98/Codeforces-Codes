#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,a,b,x,y,z;
    cin>>n>>a>>b;

    bool isPossible=false;
    for(int i=0;i<=n;i++){
        y=i;
        z=(n-y*b);
        if(z%a==0){
            x=z/a;
            isPossible=true;
            break;
        }
    }

    if(x<0){
        isPossible=false;
    }
    if(isPossible){
        cout<<"YES\n";
        cout<<x<<' '<<y;
    }
    else{
        cout<<"NO";
    }

    return 0;
}
