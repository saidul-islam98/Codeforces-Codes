#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x[4],mx=-999,idx,a,b,c;

    for(int i=0;i<4;i++){
        cin>>x[i];
        if(x[i]>mx){
            mx=x[i];
            idx=i;
        }
    }

    if(x[0]!=mx){
        x[idx]=x[0];
        x[0]=mx;
    }

    a=x[0]-x[1];
    b=x[2]-a;
    c=x[0]-b-a;

    cout<<a<<" "<<b<<" "<<c;

    return 0;
}
