#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,f,s;
    cin>>n>>m;

    if(n>=m){
        f=m;
        s=(n-f)/2;
    }
    else if(m>n){
        f=n;
        s=(m-f)/2;
    }

    cout<<f<<" "<<s;

    return 0;
}
