#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;

    while(m--){
        if(n%10==0){
            n=n/10;
        }
        else{
            n--;
        }
    }

    cout<<n;
    return 0;
}
