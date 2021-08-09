#include<bits/stdc++.h>

using namespace std;

long long int prime(long long int n){
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }

    return n;
}

int main(){
    long long int n,cnt=0;
    cin>>n;

    if(n%2!=0){
        n-=prime(n);
        cnt++;
    }


    cout<<cnt+(n/2);
    return 0;
}
