#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;

    if((n-5)%10==0 || (n+5)%10==0){
        cout<<n+5;
    }
    else if((n-4)%10==0){
        cout<<n-4;
    }
    else if((n+4)%10==0){
        cout<<n+4;
    }
    else if((n-3)%10==0){
        cout<<n-3;
    }
    else if((n+3)%10==0){
        cout<<n+3;
    }
    else if((n-2)%10==0){
        cout<<n-2;
    }
    else if((n+2)%10==0){
        cout<<n+2;
    }
    else if((n-1)%10==0){
        cout<<n-1;
    }
    else if((n+1)%10==0){
        cout<<n+1;
    }
    else if(n%10==0){
        cout<<n;
    }
    return 0;
}
